#include <iostream>
#include <math.h>

using namespace std;

class Point
{
	int x;
	int y;
public:
	Point()
	{
		cout << "Work starded" << endl;

		x = 0;
		y = 0;

		cout << this << " constructor" << endl;

	}

	Point(int xx, int yy)
	{
		cout << "Work starded" << endl;

		x = xx;
		y = yy;

		cout << this << " constructor" << endl;
	}

	int GetX()
	{
		return x;
	}

	int GetY()
	{
		return y;
	}

	void SetX(int xx)
	{
		x = xx;
	}

	void SetY(int y)
	{
		this->y = y;
	}

	void Print()
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}

	double Dist()
	{
		return sqrt(x * x + y * y);
	}

	~Point()
	{
		cout << "("<< x << ", " << y << ") " << "Work overed, data deleted" << endl;
	}
};

int main(int argc, char* argv[])
{

	Point a;
	a.SetY(5);

	a.Print();

	cout << a.Dist() << endl;

	return EXIT_SUCCESS;
}

