#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int rows = 0;
	int cols = 0;

	cin >> rows >> cols;

	int** arr = new int* [rows];
	
	for (int i = 0; i < rows; ++i)
	{
		arr[i] = new int[cols];
	}

	/////////////////////////////////////////////////////////////

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			arr[i][j] = rand() % 20 + 20;

			cout << arr[i][j] << "\t";
		}

		cout << endl;
	}

	/////////////////////////////////////////////////////////////

	for (int i = 0; i < rows; ++i)
	{
		delete[] arr[i];
	}

	delete[] arr;

	return EXIT_SUCCESS;
}