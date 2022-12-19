#include "mylib.h"

int f(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if  (n == 2)
	{
		return 2;
	}
	return f(n - 1) - f(n - 2) + 2 * n;
}

/*int g(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	return g(n - 2) + f(n - 1);
}*/