#include <iostream>

using namespace std;

bool ispalin(int a)
{
	int temp = 0;
	int atemp = a;
	while (a > 0)
	{
		temp = temp * 10;
		temp += a % 10;
		a = a / 10;
	}
	if (temp == atemp)
	{
		return true;
	}
	else
		return false;
}

int main()
{
	int N;

	while (1)
	{
		cin >> N;
		if (N == 0)
		{
			break;
		}

		if (ispalin(N) == true)
		{
			cout << "yes" << "\n";
		}

		else if (ispalin(N) == false)
		{
			cout << "no" << "\n";
		}
	}

	return 0;


}