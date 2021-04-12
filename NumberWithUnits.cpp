#include <iostream>
#include "NumberWithUnits.hpp"
using namespace ariel;

NumberWithUnits& NumberWithUnits::operator+(NumberWithUnits& other){
    return *this;
}
NumberWithUnits&  NumberWithUnits::operator+=(NumberWithUnits other){
    return *this;
}
NumberWithUnits&  NumberWithUnits::operator+(){
    return *this;
}
NumberWithUnits&  NumberWithUnits::operator-(NumberWithUnits& other){
    return *this;
}
NumberWithUnits&  NumberWithUnits::operator-=(NumberWithUnits other){
    return *this;
}
NumberWithUnits&  NumberWithUnits::operator-(){
    return *this;
}
NumberWithUnits&  NumberWithUnits::operator++(){
    return *this;
}
NumberWithUnits&  NumberWithUnits::operator--(){
    return *this;
}
NumberWithUnits&  NumberWithUnits::operator<(NumberWithUnits& other){
    return *this;
}
NumberWithUnits&  NumberWithUnits::operator<=(NumberWithUnits& other){
    return *this;
}
NumberWithUnits&  NumberWithUnits::operator>(NumberWithUnits& other){
    return *this;
}
NumberWithUnits&  NumberWithUnits::operator>=(NumberWithUnits other){
    return *this;
}
NumberWithUnits&  NumberWithUnits::operator==(NumberWithUnits other){
    return *this;
}
NumberWithUnits&  NumberWithUnits::operator!=(NumberWithUnits& other){
    return *this;
}
ostream& operator<<(ostream& os,NumberWithUnits& other){
    
    return os;
}
istream& operator>>(istream& is,NumberWithUnits& other){
    return is;
}
NumberWithUnits& NumberWithUnits::operator*(int num){
    return *this;
} 