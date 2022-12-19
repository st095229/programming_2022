#include <iostream>
#include "SFarrs.h"

using namespace std;


int main(int argc, char* argv[])
{
	int size1 = 0;
	int size2 = 0;


	cin >> size1 >> size2;

	int* firstArr = new int[size1];
	int* secondArr = new int[size2];

	FillArr(firstArr, size1);
	FillArr(secondArr, size2);


	ShowArr(firstArr, size1);
	cout << endl;
	ShowArr(secondArr, size2);
	cout << endl;

	delete[] firstArr;


	delete[] secondArr;

	return EXIT_SUCCESS;
}