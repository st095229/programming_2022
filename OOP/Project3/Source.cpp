#include <iostream>

using namespace std;

class Point
{
	int x;
	int y;

public:

	Point()
	{
		x = 0;
		y = 0;
	}

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
		cout << "x = " << x << "\t y = " << y << endl << endl;
	}

	double Dist()
	{
		return sqrt(x * x + y * y);
	}

	~Point()
	{
		cout << "........." << endl;
	}

};

class Arrayes
{
	int* arr;
public:
	Arrayes(int size)
	{
		arr = new int[size];

		for (int i = 0; i < size; ++i)
		{
			arr[i] = i;
			cout << arr[i] << endl;
		}
	}

	~Arrayes()
	{
		delete[] arr;
	}
};



int main(int argc, char* argv[])
{

	Point b;

	Point a(4, 2);

	a.Print();
	b.Print();

	Arrayes a(5);

	return EXIT_SUCCESS;
}