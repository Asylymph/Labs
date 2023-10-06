// 2. Ввести два натуральных числа х и у(х < у).Увеличивать первое число на 1,
//    пока оно не будет равно второму.Вывести оба числа на экран.
//							Задание 20
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
