#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 10;
	int b = 5;

	for (int i = 0; i < 10; i++)
	{
		a += b;
		cout << a << ", ";
	}

	return EXIT_SUCCESS;
}