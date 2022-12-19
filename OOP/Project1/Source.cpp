#include <iostream>
#include <string>

using namespace std;

class Human
{
public:
	
	string name;
	int age;
	int weight;
};

int main(int argc, char* argv[])
{
	Human firstH;

	firstH.name = "Saimon";
	firstH.age = 30;
	firstH.weight = 100;
		 
	cout << firstH.age;

	return EXIT_SUCCESS;
}