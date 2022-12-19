#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	const int N = 5;
	int arr[N]{ 2,5,8,11,29 };

	for (int i = 0; i < N; ++i)
	{
		cout << arr[i] << endl;
	}

	int	*parr = arr;
	cout << parr << " " << *parr;
	return EXIT_SUCCESS;
}