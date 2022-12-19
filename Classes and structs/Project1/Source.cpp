#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 5;

	int *px = &a;
	int* px2 = &a;

	cout << &px << " " << *px << " " << px << endl;
	cout << &px2 << " " << *px2 << " " << px2 << endl;

	px += 2;
	cout << a;


	return EXIT_SUCCESS;
}