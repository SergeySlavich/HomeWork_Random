// HomeWork UNIQUE RANDOM
#include<iostream>
using namespace std;

//TODO:
//	3. ¬ Solution Arrays добавить проект UniqueRandom, и в этом проекте заполнить массив из дес€ти элементов
//		униакльными случайными числами в диапазоне от 70 до 80;

void main()
{
	setlocale(LC_ALL, "Russian");

	const int SIZE = 10;
	int min_limit = 70;
	int max_limit = 80;
	int arr[SIZE] = {};
	cout << "\t\tProject UNIQUE RANDOM\n";
	cout << "\t\t***«аполнить массив уникальными случайными числами***\n";
	//«аполнение массива уникальными значени€ми
	for (int i = 0; i < SIZE; i++)
	{
		bool uniq = true;
		do
		{
			arr[i] = (rand() % (max_limit - min_limit)) + min_limit;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j]) uniq = false;
			}
			uniq = !uniq;
		} while (uniq);
	}
	//¬ывод заполненного массива
	for (int i = 0; i < SIZE; i++)
	{
		cout << '\t' << arr[i];
	}
	cout << endl;
}