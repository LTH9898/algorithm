#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{

	int arr[1000];
	int i, N;

	cin >> N;

	memset(arr, 0, sizeof(arr));

	for (i = 2; i <= N; i++)
	{
		arr[i] = arr[i - 1] + 1;
		if (i % 2 == 0)
		{
			arr[i] = min(arr[i], arr[i / 2] + 1);
		}
		if (i % 3 == 0)
		{
			arr[i] = min(arr[i], arr[i / 3] + 1);
		}
	}

	cout << arr[N];


	return 0;
}
