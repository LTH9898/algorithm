#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;

string num;
int arr[12];


int main()
{
	memset(arr, 0, sizeof(arr));
	cin >> num;

	for (int i = 0; i < num.length(); i++)
	{
		int temp = num[i] - '0';
		arr[temp] = arr[temp] + 1;
	}

	int result = 0;

	for (int i = 0; i < 10; i++)
	{
		if (i != 6 && i != 9)
		{
			result = max(result, arr[i]);
		}
	}

	cout << max(result, (arr[6] + arr[9] + 1) / 2);


}