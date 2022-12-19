#include <iostream>

using namespace std;

class CoffeeGrinder
{
	bool chekVol()
	{
		return true;
	}

public:

	void start()
	{
		bool volIsNorm = chekVol();

		if (volIsNorm)
		{
			cout << "voltage is normal" << endl;
			cout << "starting grinding..." << endl;
		}
		else
		{
			cout << "ERROR!!! YOU WON'T DRINK COFFEE";
		}
	}
};

int main(int argc, char* argv[])
{
	CoffeeGrinder a;

	a.start();

	return EXIT_SUCCESS;
}