#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 10;

	int* pa = &a;

	int& aref = a;

	cout << *pa << " " << pa << endl;
	cout << &aref << " " << aref << endl;

	return EXIT_SUCCESS;
}