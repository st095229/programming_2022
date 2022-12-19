#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int* pa = new int;

	*pa = 10;

	cout << pa << " " << *pa << endl;

	delete pa;

	pa = nullptr;
	
	cout << pa; 

	return EXIT_SUCCESS;
}