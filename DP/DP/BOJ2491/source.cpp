#include <iostream>
#include <cstring>
#include <algorithm>

int N;
int S[100001];

using namespace std;

int main(void)
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> S[i];
	}


	int len = 1;
	int result = 1;

	for (int i = 1; i < N; i++)
	{
		if (S[i] <= S[i - 1])
			len++;
		else len = 1; //다시 초기화하기
		result = max(result, len);
	}

	len = 1;
	for (int i = 1; i < N; i++)
	{
		if (S[i] >= S[i - 1])
			len++;
		else len = 1;
		result = max(result, len);
	}


	cout << result;
	

}

//int solve1(int start)
//{
//
//	int& ret = cache1[start];
//	
//	if (ret != -1) return ret;
//
//	ret = 1; // 초기값 설정
//	for (int next = start + 1; next < N; next++)
//	{
//		if (S[start] <= S[next])
//			ret = max(ret, solve1(next) + 1);
//	}
//
//	return ret;
//}
//
//int solve2(int start)
//{
//	int& ret = cache1[start];
//
//	if (ret != -1) return ret;
//
//	ret = 1; //초기값 설정
//
//	for (int next = start + 1; next < N; next++)
//	{
//		if (S[start] >= S[next])
//			ret = max(ret, solve2(next) + 1);
//	}
//
//	return ret;
//}
//
//
//int main(void)
//{
//
//
//	cin >> N;
//
//	memset(cache1, -1, sizeof(cache1));
//	memset(cache2, -1, sizeof(cache2));
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> S[i];
//	}
//
//	int maxLen1 = 0;
//
//	for (int i = 0; i < N; i++)
//	{
//		maxLen1 = max(maxLen1, solve1(i));
//	}
//
//	int maxLen2 = 0;
//	
//	for (int i = 0; i < N; i++)
//	{
//		maxLen2 = max(maxLen2, solve2(i));
//	}
//
//	cout << maxLen1;
//
//}