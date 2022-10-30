//HomeWork RANDOM ARRAY
#include<iostream>
using namespace std;

//TODO:
//	2. В проекте Random массив, заполненный случайными числами отсортировать в порядке возрастания
//		и вывести на экран отсортированный массив;

void main()
{
	setlocale(LC_ALL, "Russian");

	const int SIZE = 10;
	int limit = 100;
	int arr[SIZE];
	cout << "\t\tProject RANDOM ARRAY\n\n";
	cout << "\t\t***Сортировать массив случайных значений***\n";
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % limit;
	}
	//Вывод исходного массива
	cout << "Исходный массив:\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << '\t' << arr[i];
	}
	cout << endl;
	//Создание заготовки отсортированного маасива
	int arr_sort[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		arr_sort[i] = arr[i];
	}
	//Сортировка массива
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr_sort[j] < arr_sort[i])
			{
				int temp = arr_sort[j];
				arr_sort[j] = arr_sort[i];
				arr_sort[i] = temp;
			}
		}
	}
	//Вывод отсортированного массива
	cout << "Отсортированный массив:\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << '\t' << arr_sort[i];
	}
	cout << endl;
}