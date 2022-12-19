#include <iostream>

using namespace std;

int sum(int a, int b)
{
	return a + b;
}

double sum(double a, double b)
{
	return a + b;
}

int main(int argc, char* argv[])
{
	double a = 5.5;
	double b = 11.2;

	cout << sum(a, b);

	return EXIT_SUCCESS;
}