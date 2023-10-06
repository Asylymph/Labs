// ЗАДАНИЕ 2 (по вариантам).Напишите программу, запрашивающую координаты точки(х, у) и значение R
//и выводящую на экран сообщение о том, попадает ли заданная точка в заштрихованную область или нет.
//											Вариант 20
#include<iostream>
#include<math.h>
using namespace std;
int main() {
	float x; float y;
	cout << "enter x, y\n";
	cin >> x >> y;
	if ((( y >= (x - 2) * (x - 2) - 3) - (x < y)) - (x > -y && y < 0) ) {
		cout << "true";
	}
	else cout << "false";
}
