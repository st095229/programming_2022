#include <iostream>
#include <math.h>

using namespace std;

class Point
{
public:

	int x;
	int y;
	int z;

	void print()
	{
		cout << x << "\n" << y << "\n" << z;
	}

	
};

int main(int argc, char* argv[])
{
	Point p1;

	p1.x = 10;
	p1.y = 15;
	p1.z = 20;

	p1.print();

	return EXIT_SUCCESS;
}