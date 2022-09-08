#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 2;

	cin >> a;

	if (a != 0)
	{
		for (int i = 2; i <= a; ++i)
		{
			b *= 2;
		}
		cout << b << endl;
	}
	else
	{
		cout << 1 << endl;
	}

	return EXIT_SUCCESS;
}