﻿// DZ15.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <string>
#include <iostream>
#include <stdint.h>
#include <iomanip>


void f()
{
	std::cout << "Vvedite chislo ot 0 do 100: ";
	std::int16_t N;
	std::cin >> N;

	if (N % 2 == 0)
	{
		int i = 0;
		while (i<N)
		{
			i = i + 2;
			std::cout << i << "\n";
			
		}

	}
	
	int i = -1;
	while (i < N)
	{
		i = i + 2;
		std::cout << i << "\n";
	}
	

}

int main()
{
    int i = 0;
    const int n = 11;
	while (i<n)
	{
		i++;
		if (i % 2 == 0)
		{
			std::cout << i << "\n";
		}
	}

	f();
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
