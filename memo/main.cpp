#include <iostream>

using namespace std;

bool IsPrime(int num);
bool IsPelindrom(int num);

int main()
{
	int num;
	cin >> num;

	for (int i = num; i < 1000000; i++)
	{
		if (IsPelindrom(i))
			if (IsPrime(i))
			{
				cout << i << endl;
				break;
			}
	}

	return 0;
}

bool IsPrime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

bool IsPelinmdrom(int num)
{

}