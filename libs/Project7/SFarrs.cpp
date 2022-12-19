#include <iostream>
#include "SFarrs.h"

using namespace std;

void FillArr(int* const arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		arr[i] = rand() % 100;
	}
}

void ShowArr(const int* const arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}