#ifndef COMPLEX_NEW
#define COMPLEX_NEW

struct complex{

    complex();
    complex(double r1,double q1);
    complex& operator*=(const complex& o);
    complex& operator/=(const complex& o);

    double r;
    double q;
};
#endif