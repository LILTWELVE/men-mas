﻿// men mas.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Составить программу, которая требует ввести два числа. 
// Если первое число больше второго, то программа печатает слово больше. 
// Если первое число меньше второго, то программа печатает слово меньше. 
// А если числа равны, программа напечатает сообщение Эти числа равны

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int a, b;

    cout << "Введите число a: ";
    cin >> a;

    cout << "Введите число b: ";
    cin >> b;

    

    if (a > b) cout << "БОЛЬШЕ" << endl;
    

    if (a < b) cout << "МЕНЬШЕ" << endl;

    if (a == b) cout << "РАВНЫ" << endl;

    return 0;
}


