// ot_a_do_20.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int a;
    long long b = 1;//начальное значение
    cin >> a;// число, которое вводят с клавиатуры
    if (a == 0)
        cout << "Ошибка";

    for (int i= a;i<=20;i++)
    {
        b *= i;
        cout << b << endl;
    }
    

}

