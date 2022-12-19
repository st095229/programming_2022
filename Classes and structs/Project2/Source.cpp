#include <iostream>
#include <math.h>

using namespace std;

struct Complex
	{
		double re, im;

		Complex()
		{
			re = 0, im = 0;
		}

		Complex(double r, double i)
		{
			re = r;
			im = i;
		}

		void print()
		{
			cout << re << " + " << im << "i" << endl;
		}

		double mod()
		{
			return sqrt(re * re + im * im);
		}

		Complex operator+(Complex y)
		{
			Complex z;
			z.re = re + y.re;
			z.im = im + y.im;
			return z;
		}

		Complex operator*(Complex y)
		{
			Complex z;
			z.re = re * y.re - im * y.im;
			z.im = re * y.im + im * y.re;
			return z;
		}
	};

int main(int argc, char* argv[])
{
	Complex a;
	Complex w;
	Complex u(3, 4);
	Complex v(2, 7);

	a.print();
	u.print();
	v.print();

	int x = u.mod();
	cout << x << endl;

	a = u * v;
	a.print();

	a = u + v;
	a.print();

	return EXIT_SUCCESS;
}