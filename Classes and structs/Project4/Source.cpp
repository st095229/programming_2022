#include <iostream>

using namespace std;

void foo(int* pa, int* pb, int* pc)
{
	(*pa) = 555;
	(*pb)++;
	(*pc) = -20;
}



int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 1;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	cout << "foo: " << a << endl;

	foo(&a, &b, &c);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;


	return EXIT_SUCCESS;
}