//������� 4: �������� ���������, ������� ����������� ������ ����� ����� a, b, c, d. ��������� ������ ������� � ������ ������ ����� ������ ��� �������� �������������� ���������:
//(a + b)3 �(c?d)4

#include<iostream>;
using namespace std;
int main() {
	int a, b, c, d;
	cout << "Enter a = \n";
	cin >> a;
	cout << "Enter b = \n";
	cin >> b;
	cout << "Enter c = \n";
	cin >> c;
	cout << "Enter d = \n";
	cin >> d;
	cout << "result is " << (a+b)* (a + b)* (a + b) << " and " << (c-d)*(c - d)*(c - d)*(c - d);
	return 0;
}