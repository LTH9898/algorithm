#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int n, m;
int arr[9];
int numbers[9];

void func(int num, int cnt)
{
	if (cnt == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << "\n";
		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (num > 0)
		{
			if (numbers[i] < arr[num - 1])
			{
				continue;
			}
		}
		arr[num] = numbers[i];
		func(num + 1, cnt + 1);
	}
}

int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> numbers[i];
	}

	sort(numbers, numbers + n);

	func(0, 0);
}