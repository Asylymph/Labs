//ЗАДАНИЕ 1 (по вариантам).Напишите программу, запрашивающую координату точки х  и 
//выводящую на экран значение y в соответствии с указанным графиком.
//							Вариант 20
#include<iostream>
#include<math.h>
using namespace std;
int main() {
	float y;
	float x;
	cin >> x;
	if (x >= -4 && x <= 0) y = -x / 2;
	else if (x > 0 && x < 2) {
		y = -sqrt(4 - x * x) + 2; }
	else if (x >= 2 && x < 4) y = sqrt(4 - (x - 2) * (x - 2));
	else if (x >= 4 && x <= 5) y = -x + 4;
	cout << y;
}
