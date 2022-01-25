#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int n, m;
int arr[9];
int numbers[9];
void func(int cnt, int num)
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
	for (int i = num; i < n; i++)
	{
		if (last != numbers[i])
		{
			arr[cnt] = numbers[i];
			last = arr[cnt];
			func(cnt + 1, i);
			
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
	func(0,0);
}