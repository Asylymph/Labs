//  2. ������ ��� ����������� ����� � � �(� < �).����������� ������ ����� �� 1, 
//	���� ��� �� ����� ����� �������.������� ��� ����� �� �����.
//							������� 20
//  For
/*
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int x;
    int y;
    cin >> x;
    cin >> y;
    for (int i = x; i < y; i++) {
        x = x + 1;
    }
    cout << x;
}
*/
//  While
/*
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int x;
    int y;
    cin >> x;
    cin >> y;
    while (x < y)x++;
    cout << x;
}
*/
//  Do - While
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int x;
    int y;
    cin >> x;
    cin >> y;
    do  x++; while (x < y);
    cout << x;
}