#include <iostream>

using namespace std;

class Point
{
	int x;
	int y;

public:

	Point(int valx, int valy)
	{
		x = valx;
		y = valy;
	}

	int GetX()
	{
		return x;
	}

	void SetX(int valx)
	{
		x = valx;
	}

	int GetY()
	{
		return y;
	}

	void SetY(int valy)
	{
		y = valy;
	}


	void Print()
	{
		cout << "x = " << x << "\t y = " << y;
	}
};

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;

	cin >> n >> m;

	Point a(n, m);

	a.Print();

	return EXIT_SUCCESS;
}