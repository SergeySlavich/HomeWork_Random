//HomeWork RANDOM
#include<iostream>
using namespace std;

//TODO:
//	1. � ������� Random ���������� ��������� ��������� ����� � �������� ���������,
//		������� ������������ ������ � ����������;

void main()
{
	setlocale(LC_ALL, "Russian");

	const int SIZE = 10;
	int input;
	int arr[SIZE];
	cout << "\t\tProject RANDOM\n\n";
	cout << "\t\t***������ ��������� ��������***\n";
	cout << "������� ������� ������ ��������� ��������� ����� ��� �������: "; cin >> input;
	//���������� ������� ���������� ����������
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % input;
	}
	//����� ������� � �������
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}