#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		int N;
		cin >> N;
		v.push_back(N);
	}

	for (int i = 0; i < 5; i++)
	{
		sum += pow(v[i], 2);
	}

	int result = sum % 10;

	cout << result;

	return 0;
}