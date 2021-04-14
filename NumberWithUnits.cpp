#include <iostream>
#include "NumberWithUnits.hpp"
#include <stdexcept>
using namespace ariel;


NumberWithUnits& NumberWithUnits::operator+(const NumberWithUnits& other) const{
    // if(this->unit != other.unit ){
    //   throw invalid_argument("Units do not match ["+this->unit+"] cannot be converted to ["+other.unit+"]");
    // }
    NumberWithUnits *temp = new NumberWithUnits();
    return *temp;
}
NumberWithUnits&  NumberWithUnits::operator+=(const NumberWithUnits& other) const{
    NumberWithUnits *temp = new NumberWithUnits();
    return *temp;
}
NumberWithUnits&  NumberWithUnits::operator+(){
    return *this;
}
NumberWithUnits&  NumberWithUnits::operator-(const NumberWithUnits& other) const{
    NumberWithUnits *temp = new NumberWithUnits();
    return *temp;
}
NumberWithUnits&  NumberWithUnits::operator-=(const NumberWithUnits& other) const{
    NumberWithUnits *temp = new NumberWithUnits();
    return *temp;
}
NumberWithUnits&  NumberWithUnits::operator-(){
    return *this;
}
NumberWithUnits&  NumberWithUnits::operator++(int) {
    return *this;
}
NumberWithUnits&  NumberWithUnits::operator--(int){
    return *this;
}
bool  NumberWithUnits::operator<(const NumberWithUnits& other) const{
    return true;
}
bool  NumberWithUnits::operator<=(const NumberWithUnits& other) const{
    return true;
}
bool  NumberWithUnits::operator>(const NumberWithUnits& other) const{
    return true;
}
bool  NumberWithUnits::operator>=(const NumberWithUnits& other) const{
    return true;
}
bool NumberWithUnits::operator==(const NumberWithUnits& other) const {
    return true;
}
bool NumberWithUnits::operator!=(const NumberWithUnits& other) const{
    return true;
}
NumberWithUnits& ariel::operator*(double num,NumberWithUnits& nwu){
    return nwu;
}