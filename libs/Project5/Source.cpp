#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int size = 0;

	cout << "enter the size: ";
	cin >> size;

	int* arr = new int[size];
	
	for (int i = 0; i < size; ++i)
	{
		arr[i] = rand() % 10;

		cout << arr[i] << "\t";

		cout << arr + i << endl;
	}

	delete[] arr;


	return EXIT_SUCCESS;

}