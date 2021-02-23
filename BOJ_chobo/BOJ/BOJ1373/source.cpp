#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	long long result = 0;
	string arr;

	cin >> arr;

	int temp = arr.length() - 1;

	for (int i = 0; i < arr.length(); i++)
	{
		result += arr[i] * pow(2, temp);

		temp--;

	}

	cout << result;

}