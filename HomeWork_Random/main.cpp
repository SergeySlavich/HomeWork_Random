//HomeWork RANDOM
#include<iostream>
using namespace std;

//TODO:
//	1. ¬ проекте Random обеспечить генерацию случайных чисел в заданном диапазоне,
//		который пользователь вводит с клавиатуры;

void main()
{
	setlocale(LC_ALL, "Russian");

	const int SIZE = 10;
	int input;
	int arr[SIZE];
	cout << "\t\tProject RANDOM\n\n";
	cout << "\t\t***ћассив случайных значений***\n";
	cout << "¬ведите верхний предел диапазона случайных чисел дл€ массива: "; cin >> input;
	//«аполнение массива случайными значени€ми
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % input;
	}
	//¬ывод массива в консоль
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}