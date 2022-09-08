#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;

	cin >> k >> m;

	cout << (k > m ? k : m);

	return EXIT_SUCCESS;
}