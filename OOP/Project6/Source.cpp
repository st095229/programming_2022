#include <iostream>

using namespace std;

class MyClass
{
public:
	int	*data;

	MyClass(int size)
	{
		this->Size = size;
		this->data = new int[size];

		for (int i = 0; i < size; ++i)
		{
			data[i] = i;
		}

		cout << "Конструктор вызван " << this << endl;
	};

	MyClass(const MyClass& other)
	{
		this->data = other.data;
		cout << "Конструктор копирования вызван " << this << endl;
	}

	~MyClass()
	{
		cout << "Деструктор вызван " << this << endl;

		delete[] data;
	};
private:
	int Size;
};

/*Arr foo1()
{
	cout << "Вызвалась функция foo1 " << endl;
	Arr temp(1);

	return temp;
}

void foo(Arr val)
{
	cout << "Вызвалась функция foo" << endl;
}
*/
int main()
{
	setlocale(LC_ALL, "ru");

	///foo1();

	MyClass a(10);

	MyClass b(a);

	///foo(a);



	return EXIT_SUCCESS;
}