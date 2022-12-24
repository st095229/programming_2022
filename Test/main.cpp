#include <iostream>

using namespace std;

struct Complex
{
    double re;
    double im;

    Complex()
    {
        re = 0;
        im = 0;
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

    Complex operator+(Complex y)
    {
        Complex z;
        z.re = re + y.re;
        z.im = im + y.im;
        return z;

    }
};

int main(int argc, char* argv[])
{
    Complex x(2, 5);
    Complex y(4, 7);
    Complex z;

    z.print();
    x.print();
    y.print();

    z = x + y;

    z.print();

    return EXIT_SUCCESS;
}
