// Fraction.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "FractionClass.h"

int main()
{
    std::cout << "Hello World!\n";

    FractionClass a(1, 1);
    FractionClass b(1, 3);
    FractionClass c(1, 5);
    FractionClass d(1, 7);
    FractionClass e(1, 9);
    a = a - b + c - d + e; 
    // Сумма ряда Лейбница равна pi/4 , для получения числа пи нужно умножить результат на 4
    a.print();
}


