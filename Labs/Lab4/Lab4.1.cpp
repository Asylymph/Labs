//                                  Вариант 20
//   одномерном массиве, состоящем из п вещественных элементов, вычислить:
//   произведение положительных элементов массива;
//   сумму элементов массива, расположенных до минимального элемента.
//   Упорядочить по возрастанию отдельно элементы, стоящие на четных местах, и элементы, стоящие на нечетных местах.



#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int nums[] = { 1, -2, 32, -40, 100, 2, 33, -5, -9, 2, -1 };
    int min = nums[0];
    int max = nums[0];
    int x = 0;
    int multiply=1;
    int sum = 0;
    int length = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < length; i++)
    {
        if (nums[i] > 0)
        {
            multiply *= nums[i]; ; //   произведение положительных элементов массива;
        }
        if (min > nums[i]) {
            min = nums[i];
            x = i;
        }
    }
    for (int i = 0; i < x; i++) {
        sum += nums[i]; //   сумму элементов массива, расположенных до минимального элемента.
    }
    cout << multiply << "  " << sum << "  " << min;
    for (int i = 0; i < length; i++) {
         for (int j = 0; j < length; i++) {
             if (nums[i] > nums[j]) {
                 nums[i] = nums[j];
             }
        }
    }
}