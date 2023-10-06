//									Задание 20
// 1. Найти самую большую цифру целого числа. 
// while
/*#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int x;
	cin >> x;
	int max = x % 10;
    while (x > 0)
    {
        if (x % 10 > max)
            max = x % 10;
        x /= 10;
    }
	cout << max;
}
*/
// For
/*
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    int max = x % 10;
    for (int i = 0; i <= sizeof(x); i++)
    {
        if (x % 10 > max) 
            max = x % 10;
            x /= 10;
        
    }
    cout << max;
}
*/
// Do - While
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    int max = x % 10;
    do {
        if (x % 10 > max)
            max = x % 10;
        x /= 10;
    } while (x > 0);
    cout << max;
}
