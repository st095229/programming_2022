#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int count = 1;

	cin >> a;

	for(int i = 1; i <= a; ++i)
	{
		count *= i;
	}

	cout << count << endl;

	return EXIT_SUCCESS;
}