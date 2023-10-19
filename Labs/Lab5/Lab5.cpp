// Вариант 20 
// Дан двумерный массив 5х5.С помощью функций для строк, имеющих 
// хотя бы один  нулевой элемент - определить сумму элементов, для остаьных - произведение. 
#include<iostream>
#include<stdlib.h>
using namespace std;
int calc(int mas[][5])
{
	cout << ":::::::::: After :::::::::::\n";
	for (int i = 0; i < 5; i++) {
		int sum = 0;
		int multiply = 1;
		bool flag = false;
		for (int j = 0; j < 5; j++) {
			cout << mas[i][j] << " ";
			sum += mas[i][j];
			multiply *= mas[i][j];
			if (mas[i][j] == 0) {
				flag = true;
			}
		}
		if (flag == true) {
			cout << "	<---- sum is : " << sum;
		}
		else cout << "	<---- multiply : " << multiply;
		cout << endl;
	}
	return 0;
}
int a[5][5];
int main() {
	setlocale(LC_ALL, "rus");
	cout << ":::::::::: Before :::::::::::\n";
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			a[i][j] = 9 - rand() % 19;
			cout << a[i][j] << " ";
			}
		cout << endl;
		}
		cout << endl;
		calc(a);
	}
