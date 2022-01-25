#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int n, m;
int arr[8];
int numbers[8];
void func(int cnt)
{
	if (cnt == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 0; i < n; i++)
	{
		arr[cnt] = numbers[i];
		func(cnt + 1);
	}
}
int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> numbers[i];
	}

	sort(numbers, numbers + n);


	func(0);

}