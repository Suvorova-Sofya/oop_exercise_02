#include <iostream>
#include "complex.h"
#include <math.h>

complex::complex() {r=0;q=0;}

complex::complex(double r1, double q1){
    r=r1;
    q=q1;
}

complex& complex::operator*=(const complex &o) {
    r*=o.r;
    q+=o.q;
    return *this;
}

complex& complex::operator/=(const complex &o) {
    r=r/o.r;
    q=q-o.q;
    return *this;
}

std::istream& operator>> (std::istream& is,complex& m){
    is >> m.r >> m.q;
    return is;
}
std::ostream& operator<< (std::ostream& os,const complex& m){
    os << m.r << " " << m.q <<"\n";
    return os;
}

complex operator""_angle(long double q){
    complex d;
    d.r=1;
    d.q=q;
    return d;
}