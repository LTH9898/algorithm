#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int n;
int m;
int arr[9];
int numbers[9];
bool isused[9];

void func(int cnt)
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
	int last = 0;

	for (int i = 0; i < n; i++)
	{
		if (!isused[i] && numbers[i] != last)
		{
			isused[i] = 1;
			arr[cnt] = numbers[i];
			last = arr[cnt];
			func(cnt + 1);
			isused[i] = 0;
		}
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