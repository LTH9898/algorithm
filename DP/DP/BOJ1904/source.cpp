#include <iostream>
#include <cstring>

using namespace std;

int ret = 0;
int N;
int cache[1000001];
int modular = 15746;

int func(int a)
{
	cache[0] = 0;
	cache[1] = 1;
	cache[2] = 2;

	if (a == 0)
	{
		return 0;
	}
	if (a == 1)

	{
		return 1;
	}
	if (a == 2)

	{
		return 2;
	}

	int& ret = cache[a];

	if (ret != -1) return ret;
	
	ret = func(a-1) + func(a-2);
	ret = ret % modular;
	return ret;

}

int main(void)
{
	memset(cache, -1, sizeof(cache));


	int result;

	cin >> N;

	result = func(N);

	cout << result;
	cout << cache[N] << cache[N-1];
	return 0;
	


}
