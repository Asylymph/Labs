// Вариант 20
// Дана целочисленная прямоугольная матрица.Определить количество отрицательных элементов в тех строках,
// Которые содержат хотя бы один нулевой элемент.
#include<iostream>
#include<stdlib.h>
using namespace std;
int a[5][5];
int main()
{
	setlocale(LC_ALL, "rus");
	int a[5][5];
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		int counter = 0;
		bool flag = false;
		for (int j = 0; j < 5; j++) {
			a[i][j] = 9 - rand() % 19;
			cout << a[i][j] <<  " ";
			if (a[i][j] < 0) {
				counter++;
			}
			if (a[i][j] == 0) {
				flag = true;
			}
		}
		if (flag == true) {
			cout << "	<---- number of negative numbers is : " << counter;
		}
		cout << endl;
	}
}