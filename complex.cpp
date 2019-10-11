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
complex operator+ (complex w1,complex w2){
    complex w3;
    double a1,b1,a2,b2,a3,b3;
    a1=w1.r*cos(w1.q*M_PI);
    b1=w1.r*sin(w1.q*M_PI);
    a2=w2.r*cos(w2.q*M_PI);
    b2=w2.r*sin(w2.q*M_PI);
    a3=a1+a2;
    b3=b1+b2;
    w3.r=sqrt(pow(a3,2)+pow(b3,2));
    w3.q=(atan2(b3,a3))/M_PI;
    return w3;
}

complex operator- (complex w1,complex w2){
    complex w3;
    double a1,b1,a2,b2,a3,b3;
    a1=w1.r*cos(w1.q*M_PI);
    b1=w1.r*sin(w1.q*M_PI);
    a2=w2.r*cos(w2.q*M_PI);
    b2=w2.r*sin(w2.q*M_PI);
    a3=a1-a2;
    b3=b1-b2;
    w3.r=sqrt(pow(a3,2)+pow(b3,2));
    w3.q=(atan2(b3,a3))/M_PI;
    return w3;
}

complex operator* (complex w1,complex w2){
    complex w3;
    w3=w1;
    w3*=w2;
    return w3;
}

complex operator/ (complex w1,complex w2){
    complex w3;
    w3=w1;
    w3/=w2;
    return w3;
}

bool operator== (complex w1,complex w2){
    if((w1.r==w2.r)&&(w1.q==w2.q)){
        return true;
    }else{
        return false;
    }
}

complex& cong(complex& w1){
    w1.q=-w1.q;
    return w1;
}
