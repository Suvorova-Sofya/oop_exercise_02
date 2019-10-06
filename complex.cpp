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