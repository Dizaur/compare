// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if ((a == c && a != b) || (a == b && a != c) ||( b == c && b != a)) {
		cout << 2;
	}
	else if (a == c && a == b) {
		cout << 3;
	} else
	{
		cout << 0;
	}
    return 0;
}

/*Даны три целых числа. Определите, сколько среди них совпадающих. Программа должна вывести одно из чисел: 3 (если все совпадают), 2 (если два совпадает) или 0 (если все числа различны).
Формат входных данных
Вводятся три числа.
Формат выходных данных
Выведите ответ на задачу.*/