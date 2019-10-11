#include <iostream>
#include "complex.h"
#include <math.h>


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
        std::cout << cong(w1);
    }
    return 0;
}