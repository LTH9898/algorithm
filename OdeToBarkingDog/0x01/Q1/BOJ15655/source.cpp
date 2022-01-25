#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int n, m;
int arr[9];
int numbers[9];
bool isused[9];


void func(int num, int cnt){
	if (cnt == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << "\n";
		return;
	}

	for (int i = num; i < n; i++)
	{
		if (num > 0)
		{
			if (isused[i] || numbers[i] < arr[num - 1])
			{
				continue;
			}
		}
		arr[num] = numbers[i];
		isused[i] = 1;
		func(num + 1, cnt + 1);
		isused[i] = 0;
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