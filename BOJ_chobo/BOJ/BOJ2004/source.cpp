#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<long long, long long> zeroNum(long long N)
{
	long long two = 0;
	long long five = 0;

	for (long long i = 2; i <= N; i = i * 2)
	{
		two = two + N / i;
	}
	for (long long i = 5; i <= N; i = i * 5)
	{
		five = five + N / i;
	}

	return { two, five };
}


int main()
{
	vector<pair<long long, long long>> v;
	long long N;
	long long M;

	cin >> N >> M;

	v.push_back(zeroNum(N));
	v.push_back(zeroNum(M));
	v.push_back(zeroNum(N - M));

	cout << min(v[0].first - v[1].first - v[2].first, v[0].second - v[1].second - v[2].second);

	return 0;
}