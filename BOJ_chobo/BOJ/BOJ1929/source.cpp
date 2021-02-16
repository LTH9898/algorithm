#include <iostream>
#include <cstring>

using namespace std;

int main()
{

	int M;
	int N;
	int a[1000001];
	memset(a, 0, sizeof(a));

	a[1] = 1;

	cin >> M >> N;

	for (int i = 2; i <= N; i++)
	{
		for (int j = 2; i * j <= N; j++)
		{
			a[i * j] = 1;
		}
	}

	for (int i = M; i <= N; i++)
	{
		if (a[i] != 1)
		{
			cout << i << "\n";
		}
	}

	return 0;



}