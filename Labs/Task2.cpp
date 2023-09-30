//Задание 2: вводятся две целочисленные переменные a и b.Напишите программу, которая находит значение выражения :
//(a + b)2 + (a−b)2−3ab

#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Enter a = \n";
	cin >> a;
	cout << "Enter b = \n";
	cin >> b;
	cout << "result is " << (a + b) * 2 + (a - b) * 2 - (3 * a * b);
	return 0;
}