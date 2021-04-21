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
        bool UnitExists(const string unit) const;
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

            if (!file) {
	            throw "file not found";
	        }
            char delimiter = ' ';
            string s;
            string h;
            vector<vector<string>> v;
            vector<string> vec;
            while(getline(file,s)){
                for (size_t i = 0; i < s.size(); i++)
                {   
                    if(s.at(i) != delimiter){
                        h.push_back(s.at(i));
                        if( i == s.size()-1){
                            vec.push_back(h);
                            h.clear();
                        }
                    }
                    else{
                    vec.push_back(h);
                    h.clear();
                    }
                }
                v.push_back(vec);
                vec.clear();
                h.clear();  
            }
            file.close();
            return v;
        }
    };
    
    NumberWithUnits& operator*(double num,NumberWithUnits& nwu);

}

