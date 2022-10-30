//HomeWork RANDOM
#include<iostream>
using namespace std;

//TODO:
//	1. В проекте Random обеспечить генерацию случайных чисел в заданном диапазоне,
//		который пользователь вводит с клавиатуры;

void main()
{
	setlocale(LC_ALL, "Russian");

	const int SIZE = 10;
	int input;
	int arr[SIZE];
	cout << "\t\tProject RANDOM\n\n";
	cout << "\t\t***Массив случайных значений***\n";
	cout << "Введите верхний предел диапазона случайных чисел для массива: "; cin >> input;
	//Заполнение массива случайными значениями
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % input;
	}
	//Вывод массива в консоль
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}