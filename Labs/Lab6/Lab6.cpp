/* �������(����� ��� ����)
1)	���� ������, � ������� ������� ���� ������� ������ � ����� ������ ���� ������.������� �� ������ ��� �������,
����������� ������ ������� ������, � ���� ������� ������.������ ����� � ����� ������ �������� ����������.����������� ���������� ������.
2)	������� ������.������� ������� ���� ��(����� ����� ����� ������) � ���� ������,
���������� ����� ������ � ���������� ����� ����(� ���������) �� ���� �������� ������ ���������� ����� ��.
3)	������� ������� �������� ���� �������, ��� � ��������.�������� �� ����� ���� ������� � ��������,
����������� �������, ����� �������.
4)	������� ����� �������� � ������(�� 10).���������� � �������� �������� � ������ ��� ���������� �� ���.
������� �������� � ������ ����� ���������� ����� ?
*/

#include <iostream>
#include <string>
using namespace std;
string text;
int main() {
	setlocale(LC_ALL, "rus");

	// (1)
	string a = "The moon( is) shining(, today).";
	cout << a << "\n";
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '(') {
			int pos = a.find(')', i);
			a.erase(i, pos - i + 1);
		}
	}
	a.insert(a.length(), "..");

	// (2)
	cout << text << "\n" << "������� �����, ����� ��������� ���-�� ���� 'a' � ������\n";
	getline(cin,text);
	cout << text.length();
	float percent = 0;
	float counter = 0;
	for (int i = 0; i < text.length(); i++) {
		if (text[i] == 'a') counter++;
	}
	percent = (counter / text.length())*100;
	cout << "���-�� ���� 'a' = " << counter << "\n���� ���� 'a' � ������ = " << percent << "%\n";

	// (3)
	cout << "������� ������� �������� ���� �������, ��� � ��������.\n";
	string f, n, ln;
	getline(cin, f);
	getline(cin, n);
	getline(cin, ln);
	cout << f +'.'+ n +'.'+ ln << "\n";

	// (4)
	int stat = 0;
	int rep = 0;
	char list[10][20] = {"Arkhip", "Kirill", "Alexey", "Manvel", "Ivan", "Dmitriy", "Alexey", "Manvel" , "Genadiy" , "Manvel"};
	for (int i = 0; i < 10; i++) {
		if (list[i][0] == 'A') {
			rep++;
		}
		for (int j = 0; j < 10; j++) {
			if (list[i] == list[j]) {
				stat++;
				cout << "i = " << i <<", j = " << j << "\n";
			}
		}
	}
	cout << "���-�� �������� � ������ ������� ��� ���������� �� ��� = " << rep << "\n���-�� �������� � ����������� ������� = " << stat;
}