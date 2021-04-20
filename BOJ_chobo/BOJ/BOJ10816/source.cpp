#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int upperBound(vector<int> v, int value)
{
	int s = 0;
	int e = v.size() - 1;

	while (e > s)
	{
		int mid = (s + e) / 2;

		if (v[mid] <= value)
		{
			s = mid + 1;
		}
		else
		{
			e = mid;
		}
	}

	if (v[e] != value)
	{
		e -= -1;
	}

	return e;
}

int lowerBound(vector<int> v, int value)
{
	int s = 0;
	int e = v.size() - 1;

	while (e > s)
	{
		int mid = (s + e) / 2;

		if (v[mid] < value)
		{
			s = mid + 1;
		}
		else
		{
			e = mid;
		}
	}

	return e;

}





int main() {
	int T;
	int M;
	
	cin >> T;

	vector<int> v;
	int low;
	int up;
	int num;
	int num2;
	
	for (int i = 0; i < T; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		int ans = 0;
		cin >> num2;

		low = lowerBound(v, num2);
		up = upperBound(v, num2);

		if (v[low] == num2)
		{
			ans = up - low;
		}
		else {
			ans = 0;
		}
		cout << ans << ' ';
	}

	return 0;
}

