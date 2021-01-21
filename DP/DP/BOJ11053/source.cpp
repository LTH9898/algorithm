#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int N;
int cache[1001], S[1001];

int lis(int start) // vector에 있는 최장 증가 수열의 길이를 준다.
{
	int& ret = cache[start];
	if (ret != -1) return ret;
	ret = 1;
	for (int next = start + 1; next < N; ++next)
		if (S[start] < S[next])
			ret = max(ret, lis(next) + 1);
	return ret;
}

int main(void)
{
	cin >> N;

	memset(cache, -1, sizeof(cache));

	for (int i = 0; i < N; i++)
	{
		cin >> S[i];
	}

	int maxLen = 0;
	for (int begin = 0; begin < N; begin++)
	{
		maxLen = max(maxLen, lis(begin));
	}
	
	cout << maxLen;

	return 0;

}