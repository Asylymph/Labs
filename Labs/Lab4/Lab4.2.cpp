#include<math.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int CountTrailingZeros(int n)
{
    // declare bitset of 64 bits
    bitset<64> bit;

    // set bitset with the value
    bit |= n;

    int zero = 0;

    for (int i = 0; i < 64; i++) {
        if (bit[i] == 0)
            zero++;
        // if '1' comes then break
        else
            break;
    }

    return zero;
}

int strongest_even(int n, int m) {
    int x = m - n + 1;
    int a[100000];
    int counter{};
    int max = 0;
    int maximum = 0;
    for (int i = 0; i < m - n + 1; i++) {
        a[i] = n + i;
        if (fmod(a[i], 2) != 0) continue;
        while (fmod(a[i], 2) == 0) {
            counter++;
            a[i] /= 2;
        }
        if (counter > max) {
            max = counter;
            maximum = a[i] * pow(2, counter);

        }
        counter = 0;
    }
    return (maximum);
}
int count(int a) {

}
#include<math.h>
#include <bits/stdc++.h>
using namespace std;
int CountTrailingZeros(int n)
{
    // declare bitset of 64 bits
    bitset<64> bit;

    // set bitset with the value
    bit |= n;

    int zero = 0;

    for (int i = 0; i < 64; i++) {
        if (bit[i] == 0)
            zero++;
        // if '1' comes then break
        else
            break;
    }

    return zero;
}
int strongest_even(int n, int m) {
    int a[n - m + 1];
    int index{};
    int max = 0;

    for (int i = 0; i < m - n + 1; i++) {
        a[i] = CountTrailingZeros(n + i);
        if (a[i] > max) {
            max = a[i];
            index = i;
        }
    }
    return (n + index);
}