//  2. Ââåñòè äâà íàòóðàëüíûõ ÷èñëà õ è ó(õ < ó).Óâåëè÷èâàòü ïåðâîå ÷èñëî íà 1, 
//	ïîêà îíî íå áóäåò ðàâíî âòîðîìó.Âûâåñòè îáà ÷èñëà íà ýêðàí.
//							Çàäàíèå 20
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
