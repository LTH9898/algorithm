#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
using namespace std;

int a[1000001];

int main()
{
	cin.sync_with_stdio(false);
	int num;
	int k;

	a[1] = 1;

	for (int i = 2; i <= 1000000; i++)
	{
		for (int j = 2; i * j <= 1000000; j++)
		{
			a[i * j] = 1;
		}
	}
	// 4 이후의 모든 소수 아닌수들은 0으로 초기화

	
	while (1)
	{
		k = 3;
		cin >> num;

		if (num == 0)
			break;
		

		while (1)
		{
			if (num - k < 0)
			{
				cout << "Goldbach's conjecture is wrong.";
				break;
			}
			if (a[k] != 1 && a[num - k] != 1)
			{
				printf("%d = %d + %d", num, k, num - k);
				printf("\n");
				break;
			}
			k++;
		}
	}

	return 0;
	
	



}