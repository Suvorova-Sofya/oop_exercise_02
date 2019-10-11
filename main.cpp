#include <iostream>
#include "complex.h"
#include <math.h>

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

complex& operator- (complex& w1){
    w1.q=-w1.q;
    return w1;
}


int main() {
    complex w1;
    complex w2;
    std::cout << "Введите 2 комплексных числа" << std::endl;
    std::cin >> w1 >> w2;
    if((w1.r<0) || (w2.r<0)){
        std::cout << "Модуль не может быть отрицательным " << std::endl;
    }else {
        std::cout << "+ :";
        std::cout << w1+w2;
        std::cout << "- :";
        std::cout << w1-w2;
        std::cout << "* :";
        std::cout << w1*w2;
        std::cout << "/ :";
        std::cout << w1/w2;
        std::cout << "Сравнение :";
        if(w1==w2){
            std::cout << "Равны" << "\n";
        }else{
            std::cout << "Не равны" << "\n";
        }
        std::cout << "Сопряженое первого комплексного числа :";
        std::cout << -w1;
    }
    return 0;
}