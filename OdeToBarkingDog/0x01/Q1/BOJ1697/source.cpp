#include <iostream>
#include <queue>

using namespace std;

int arr[100002];
int n, k;
int nxt[3] = { 0 };
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> k;
	fill(arr, arr + 100001, -1);
	arr[n] = 0;
	queue<int> Q;
	Q.push(n);
	while (arr[k] == -1)
	{
		int cur = Q.front(); Q.pop();
		nxt[0] = cur - 1;
		nxt[1] = cur + 1;
		nxt[2] = cur * 2;
		for (int i = 0; i < 3; i++)
		{
			if (nxt[i] < 0 || nxt[i] > 100000)
			{
				continue;
			}
			if (arr[nxt[i]] != -1)
			{
				continue;
			}
			arr[nxt[i]] = arr[cur] + 1;
			Q.push(nxt[i]);
		}
	}
	cout << arr[k];
}