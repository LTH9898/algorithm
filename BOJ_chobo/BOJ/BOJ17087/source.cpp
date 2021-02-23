#include <iostream>
#include <vector>
using namespace std;

long long gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a % b);
}

int main() {
	vector<long long> v1;
	vector<long long> v2;
	long long N;
	long long S;

	cin >> N >> S;

	for (int i = 0; i < N; i++)
	{
		long long temp= 0;
		cin >> temp;
		v1.push_back(temp);
	}

	for (int i = 0; i < N; i++)
	{
		long long temp2 = 0;

		if (S > v1[i])
		{
			temp2 = S - v1[i];
			v2.push_back(temp2);
		}
		else
		{
			temp2 = v1[i] - S;
			v2.push_back(temp2);
		}
	}

	long long ans = v2[0];

	for (int i = 1; i < N; i++)
	{
		if (v2[i] >= ans)
		{
			ans = gcd(v2[i], ans);
		}
		else ans = gcd(ans, v2[i]);
	}

	cout << ans;

	return 0;
}