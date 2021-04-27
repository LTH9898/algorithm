#include <iostream>
#include <string.h>
#include <string>
using namespace std;


int arr2[2000001];

int result = 0;

int main() {

	memset(arr2, 0, sizeof(arr2));

	int n;
	int x;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		arr2[temp]++;
	}

	cin >> x;

	for (int i = 1; i <= x; i++)
	{
		if (x - i < 0)
		{
			continue;
		}
		if (x - i == i)
		{
			continue;
		}
		if (arr2[i] == 1 && arr2[x - i] == 1)
		{
			result++;
			arr2[i] = 0;
			arr2[x - i] = 0;
		}
	}

	cout << result;



}