#include <iostream>

using namespace std;

int n, m;
int arr[10];
bool isused[10];

void func(int k, int j) {
	if (j == m) {
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << '/n';
		return;
	}
	for (int i = k; i <= n; i++)
	{
		if (!isused[i])
		{
			isused[i] = true;
			arr[j] = i;
			func(i + 1, j + 1);
			isused[i] = false;
		}
	}
}

int main() {
	cin >> n >> m;
	func(1, 0);
}