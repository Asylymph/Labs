//Задание1: Напишите программу, которая запрашивает натуральное число и выводит его квадрат.

#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	cout << "Enter x to get x^2 \n";
	int x;
	cin >> x;
	x = x * x;
	cout << "result is " << x;
	return 0;
}
