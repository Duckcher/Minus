#pragma once
#include <math.h>
#include <iostream>
#include <Windows.h>
using namespace std;
int inputInt(const char query[])
{
	int i;
	cout << query;
	while ((cin >> i).fail() || i <= 0)
	{
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		cout << "Error: " << endl;
	}
	return i;
}
int razn(int a, int b)
{
	if (a / 10 < 1 || b / 10 < 1 || a / 10 > 9 || b / 10 > 9)
	{
		cout << "Можно записывать только двузначные числа" << endl;
		system("pause");
	}
	if (a < b)
	{
		cout << "Не допускается отрицательный результат" << endl;
		system("pause");
	}
		cout << a << "-" << b << "=" << a - b << endl;
		return a - b;
	
}
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int a = inputInt("Введите а: ");
	int b = inputInt("Введите b: ");
    razn(a, b);

}