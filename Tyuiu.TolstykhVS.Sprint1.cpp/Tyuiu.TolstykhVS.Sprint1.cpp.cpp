#include <iostream>
#include <windows.h>
#include "..//../Tyuiu.TolstykhVS.Sprint1.Lib/Tyuiu.TolstykhVS.Sprint1.Lib.cpp"
#include <string>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;
    int A;
    cout << "введите трехзначное целое число";
    cin >> number;
    cout << "Введите число A: ";
    cin >> A;
    int digit1 = number % 10;
    int digit2 = (number / 10) % 10;
    int digit3 = number / 100;
    int sum_of_digits = digit1 + digit2 + digit3;

    if (number >= 100 && number < 1000)
    {
        int digit1 = number % 10;
        int digit2 = (number / 10) % 10;
        int digit3 = number / 100;
        int sum_of_digits = digit1 + digit2 + digit3;
    }
    else

    {
        cout << "Вы ввели не трехзначное число." << endl;
    }
    if (sum_of_digits % A == 0)
    {
        cout << "Сумма цифр числа " << number << " кратна числу A." << endl;
    }
    else
    {
        cout << "Сумма цифр числа " << number << " не кратна числу A." << endl;
    }
    
    return 0;
}