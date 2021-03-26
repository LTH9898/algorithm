#include <iostream>
#include <algorithm>
using namespace std;

int k, n;
int arr[10000];

long long getCount(long long size) {
	long long cnt = 0;

	for (int i = 0; i < k; i++)
	{
		cnt += (arr[i] / size);
	}

	return cnt;
}

int main() {
	cin >> k >> n;
	for (int i = 0; i < k; i++) cin >> arr[i];

	sort(arr, arr + k);

	int ans = 0;

	long long left = 1;
	long long right = arr[k - 1];

	while (left <= right) {

		long long mid = (left + right) / 2;

		long long cnt = getCount(mid);

		if (cnt >= n) {
			left = mid + 1;
			ans = mid;
		}
		else {
			right = mid - 1;
		}
	}

	cout << ans << "\n";


	return 0;
}