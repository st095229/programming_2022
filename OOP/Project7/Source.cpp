#include <iostream>

using namespace std;

class MyClass
{
public:
	int* data;

	MyClass(int size)
	{
		this->data = new int[size];

		for (int i = 0; i < size; ++i)
		{
			data[i] = i;
		}

		cout << "Вызвался конструктор " << this << endl;
	}

	~MyClass()
	{
		cout << "Вызвался деструктор " << this << endl;
		delete[] data;
	};

};



int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");

	MyClass a(10);
	MyClass b(a);

	return EXIT_SUCCESS;
}