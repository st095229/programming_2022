#include <iostream>

using namespace std;

void merge(int* pa, int* pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}


int main(int argc, char* argv[])
{
	int a = 0; 
	int b = 0;

	cin >> a >> b;

	cout << a << " " << b << endl;

	merge(&a, &b);

	cout << a << " " << b << endl;

	return EXIT_SUCCESS;
}