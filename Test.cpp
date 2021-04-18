#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
#include "doctest.h"

#include "NumberWithUnits.hpp"
using namespace ariel;


TEST_CASE("boolean operators"){
    NumberWithUnits a{1,"km"};
    NumberWithUnits b{1,"km"};
    //==
    CHECK(a==b);
    CHECK(a == NumberWithUnits{1, "km"});
    CHECK(b == a);
    CHECK(NumberWithUnits{1, "km"} == a);
    //!=
    NumberWithUnits c{1,"tons"};
    CHECK(a!=c);
    CHECK(c!=a);
    CHECK(NumberWithUnits{1, "km"} != c);
    CHECK(NumberWithUnits{2, "m"} == a);
    // <
    NumberWithUnits d{900,"m"};
    CHECK(d<a);
    CHECK(NumberWithUnits{1, "kg"}<c);
    CHECK(a<NumberWithUnits{2, "km"});
    CHECK(NumberWithUnits{1, "mg"}<NumberWithUnits{8, "mg"});
    //>
    CHECK(a>d);
    CHECK(c>NumberWithUnits{1, "kg"});
    CHECK(NumberWithUnits{2, "km"}>a);
    CHECK(NumberWithUnits{8, "mg"} > NumberWithUnits{1, "mg"});
    // <=
    CHECK(d<=a);
    CHECK(NumberWithUnits{100, "kg"}<=c);
    CHECK(a<=NumberWithUnits{1, "km"});
    CHECK(NumberWithUnits{1, "mg"}<=NumberWithUnits{1, "mg"});
    //>=
    CHECK(a>=d);
    CHECK(c>=NumberWithUnits{100, "kg"});
    CHECK(NumberWithUnits{10, "km"}>=a);
    CHECK(NumberWithUnits{8, "mg"} >= NumberWithUnits{1, "mg"});


}

TEST_CASE("computational operators"){
    NumberWithUnits a{1,"km"};
    NumberWithUnits b{1,"km"};
    NumberWithUnits c{2,"km"};
    NumberWithUnits d{500,"g"};
    //+
    CHECK(a+b == c);
    CHECK(a+b == NumberWithUnits{2,"km"});
    CHECK((NumberWithUnits{5,"kg"}+NumberWithUnits{500,"g"}) == NumberWithUnits{5.5,"kg"});
    CHECK(NumberWithUnits{5,"kg"}+d == NumberWithUnits{5.5,"kg"});
    //-
    CHECK(c-b == a);
    CHECK(a-b == NumberWithUnits{0,"km"});
    CHECK((NumberWithUnits{5,"kg"}-NumberWithUnits{500,"g"}) == NumberWithUnits{4.5,"kg"});
    CHECK(NumberWithUnits{5,"kg"}-d == NumberWithUnits{4.5,"kg"});
    //+=
    CHECK((NumberWithUnits{5,"kg"} += NumberWithUnits{500,"g"}) == NumberWithUnits{5.5,"kg"});
    CHECK((NumberWithUnits{5,"kg"} += d) == NumberWithUnits{5.5,"kg"});
    CHECK((d += NumberWithUnits{5,"kg"}) == NumberWithUnits{5.5,"kg"});
    //-=
    CHECK((NumberWithUnits{5,"kg"} -= NumberWithUnits{500,"g"}) == NumberWithUnits{4.5,"kg"});
    CHECK((NumberWithUnits{5,"kg"} -= d) == NumberWithUnits{4.5,"kg"});
    d.num = 100;
    CHECK((d -= NumberWithUnits{5,"kg"}) == NumberWithUnits{95,"kg"});
    // unary +/-
    CHECK(-a == NumberWithUnits{-1,"km"});
    CHECK(+a == NumberWithUnits{1,"km"});
    //++
    CHECK(a-- == NumberWithUnits{2,"km"});
    CHECK(a-- == NumberWithUnits{0,"km"});
    NumberWithUnits f{15,"mg"};
    f++;
    CHECK(f.num == 16);

}

TEST_CASE("stream operators"){

    NumberWithUnits a{1,"km"};
    NumberWithUnits b{1,"km"};
    NumberWithUnits c{2,"km"};
    ostream& s = cout << a;
    std::stringstream sst;
    sst << s.rdbuf();
    std::string myString = sst.str();
    CHECK_EQ(myString,"1[km]");

}
