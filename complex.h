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

std::istream& operator>> (std::istream& is,complex& m);
std::ostream& operator<< (std::ostream& os,const complex& m);
complex operator""_angle(long double q);
complex operator+ (complex w1,complex w2);
complex operator- (complex w1,complex w2);
complex operator* (complex w1,complex w2);
complex operator/ (complex w1,complex w2);
bool operator== (complex w1,complex w2);
complex& operator- (complex& w1);
#endif