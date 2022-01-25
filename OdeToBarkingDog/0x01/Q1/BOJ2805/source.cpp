#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<long long> v;
	long long Ans = 0;
	long long N;
	long long target;
	long long left, right;

	cin >> N;
	cin >> target;

	for (int i = 0; i < N; i++)
	{
		long long num;
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	left = 0; right = v[N - 1];

	while (left <= right)
	{
		long long mid = (left + right) / 2;
		long long result = 0;

		for (int i = 0; i < N; i++)
		{
			if (mid < v[i])
			{
				result = result + (v[i] - mid);
			}
		}

		if (result >= target) {
			if (Ans < mid)
				Ans = mid;
			left = mid + 1;
		}

		else {
			right = mid - 1;
		}
	}

	cout << Ans;
	return 0;
}