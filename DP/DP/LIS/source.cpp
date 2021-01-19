#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;


int TC;
int N;

int S[100];
int cache[100];


int lis2(int start) {
	int& ret = cache[start];
	if (ret != -1) return ret;

	ret = 1;
	for (int next = start + 1; next < N; next++)
	{
		if (S[start] < S[next])
		{


			ret = max(ret, lis2(next) + 1);
			cout << ret << ",,,";
		}
	}
	return ret;
}

int main(void)
{

	cin >> TC;
	
	for (int i = 0; i < TC; i++)
	{

		cin >> N;
		memset(cache, -1, sizeof(cache));

		for (int i = 0; i < N; i++)
		{
			cin >> S[i];
		}	
		
		int maxLen = 0;
		for(int begin = 0; begin < N; begin++)
		{
			maxLen = max(maxLen, lis2(begin));
		}

		cout << maxLen << endl;

			

		


	}


	return 0;
}





