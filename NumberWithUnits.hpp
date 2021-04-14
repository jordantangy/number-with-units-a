#pragma once
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

namespace ariel{

    class NumberWithUnits{
        public:
        double num;
        string unit;
        NumberWithUnits(){}
        NumberWithUnits(double num, string unit):num(num), unit(unit){}
        NumberWithUnits& operator+(const NumberWithUnits& other) const;
        NumberWithUnits& operator+=(const NumberWithUnits& other) const;
        NumberWithUnits& operator+();
        NumberWithUnits& operator-(const NumberWithUnits& other) const;
        NumberWithUnits& operator-=(const NumberWithUnits& other) const;
        NumberWithUnits& operator-();
        NumberWithUnits& operator++(int);
        NumberWithUnits& operator--(int);
        bool operator<(const NumberWithUnits& other) const;
        bool operator<=(const NumberWithUnits& other) const;
        bool operator>(const NumberWithUnits& other) const;
        bool operator>=(const NumberWithUnits& other) const;
        bool operator==(const NumberWithUnits& other) const;
        bool operator!=(const NumberWithUnits& other) const;
        friend ostream& operator<<(ostream& os,const NumberWithUnits& nwu) {
            return os;
        }
        friend istream& operator>>(istream& is,NumberWithUnits& nwu){
            return is;
        }
        static vector<vector<string>> read_units(ifstream& file){
            string delimiter = "=";
            vector<vector<string>> v;
            vector<string> h;
	        if (!file) {
		        throw "file not found";
	        }
	        else {
                string s;
	            while (std::getline(file, s)){
                size_t pos = 0;
                string token;
                    while ((pos = s.find(delimiter)) != std::string::npos) {
                        token = s.substr(0, pos);
                        h.push_back(token);
                        s.erase(0, pos + delimiter.length());
                    }
                h.push_back(s);
                v.push_back(h);
                h.clear(); 
            }
    	}
            file.close();
return v;

}
    };
    
    NumberWithUnits& operator*(double num,NumberWithUnits& nwu);


}

