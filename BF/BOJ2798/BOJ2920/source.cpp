#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> v;
	int temp;
	int result = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	
	for (int i = 0; i < 8; i++)
	{
		if (v[i] != i+1)
		{
			result = 1;
			break;
		}
	}

	if (result == 0)
	{
		cout << "ascending";
		return 0;
	}
	int a = 8;
	for (int i = 0; i < 8; i++)
	{
		
		if (v[i] != a)
		{
			result = 2;
			break;
		}
		a--;
	}

	if (result == 1)
	{
		cout << "descending";
	}

	if (result == 2)
	{
		cout << "mixed";
	}

	return 0;

	
}