// ������� 2 (�� ���������).�������� ���������, ������������� ���������� �����(�, �) � �������� R
//� ��������� �� ����� ��������� � ���, �������� �� �������� ����� � �������������� ������� ��� ���.
//											������� 20
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