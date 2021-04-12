
#include <iostream>
using namespace std;

namespace ariel{

    class NumberWithUnits{
        public:
        double num;
        string unit;

        NumberWithUnits(double num, string unit): num(num), unit(unit){};
        NumberWithUnits& operator+(NumberWithUnits& other);
        NumberWithUnits& operator+=(NumberWithUnits other);
        NumberWithUnits& operator+();
        NumberWithUnits& operator-(NumberWithUnits& other);
        NumberWithUnits& operator-=(NumberWithUnits other);
        NumberWithUnits& operator-();
        NumberWithUnits& operator++();
        NumberWithUnits& operator--();
        NumberWithUnits& operator<(NumberWithUnits& other);
        NumberWithUnits& operator<=(NumberWithUnits& other);
        NumberWithUnits& operator>(NumberWithUnits& other);
        NumberWithUnits& operator>=(NumberWithUnits other);
        NumberWithUnits& operator==(NumberWithUnits other);
        NumberWithUnits& operator!=(NumberWithUnits& other);
        friend ostream& operator<<(ostream& os,NumberWithUnits& other);
        friend istream& operator>>(istream& is,NumberWithUnits& other);
        static void read_units(ifstream& file);
        NumberWithUnits& operator*(int num); 
    };

}
