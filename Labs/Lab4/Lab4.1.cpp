//                                  ������� 20
//   ���������� �������, ��������� �� � ������������ ���������, ���������:
//   ������������ ������������� ��������� �������;
//   ����� ��������� �������, ������������� �� ������������ ��������.
//   ����������� �� ����������� �������� ��������, ������� �� ������ ������, � ��������, ������� �� �������� ������.



#include<iostream>
#include<math.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
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
            multiply *= nums[i]; ; //   ������������ ������������� ��������� �������;
        }
        if (min > nums[i]) {
            min = nums[i];
            x = i; //���������� ������
        }
    }
    for (int i = 0; i < x; i++) {
        sum += nums[i]; //   ����� ��������� �������, ������������� �� ������������ ��������.
    }
    cout << multiply << " << ��������� " << sum << " << ����� " << min << endl;

    //   ����������� �� ����������� �������� ��������, ������� �� ������ ������, � ��������, ������� �� �������� ������.

    for (int i = 0; i < length; i++) {
        if (fmod(i, 2) == 0) {
            for (int j = 0+i; j < length; j++) {
                if (fmod(j, 2) == 0) {
                    if (nums[i] > nums[j]) {
                        int f = nums[i];
                        nums[i] = nums[j];
                        nums[j] = f;
                    }
                }
            }
        }
        else if (fmod(i, 2) != 0) {
            for (int j = 0+i; j < length; j++) {
                if (fmod(j, 2) != 0) {
                    if (nums[i] > nums[j]) {
                        int f = nums[i];
                        nums[i] = nums[j];
                        nums[j] = f;
                    }
                }
            }
        }
    } //   �����
    for (int i = 0; i < length; i++) {
        cout << nums[i] << " ";
    }
}