﻿//Задание 3: Вводятся две целочисленные переменные a и b.Напишите программу, которая находит значение выражения :
//(a2−b)2−4ab2 + 4(a3−5)2.

#include<iostream>;
using namespace std;
int main() {
	int a, b;
	cout << "Enter a = \n";
	cin >> a;
	cout << "Enter b = \n";
	cin >> b;
	cout << "result is " << (a * a - b) * (a * a - b) - (4 * a * b * b) + (a * a * a - 5) * (a * a * a - 5);
	return 0;
}