#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

using namespace std;

int N, M;
int arr[10][10];

bool isSquareNum(int n)
{
	int root = (int)sqrt(n);

	if ((int)pow(root, 2) == n)
	{
		return true;
	}
	else
		return false;
}


int main()
{
	int ans = -1;
	cin >> N >> M;
	string tmp = "";
	for (int i = 1; i <= N; i++)
	{
		cin >> tmp;
		for (int j = 1; j <= M; j++)
		{
			arr[i][j] = (int)tmp[j - 1] - 48;
		}
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			for (int x = -N; x < N; x++)
			{
				for (int y = -M; y < M; y++)
				{
					if (x == 0 && y == 0)
						continue;
					int a = i, b = j;
					int now = 0;
					while (a > 0 && a <= N && b > 0 && b <= M) {
						now *= 10;
						now += arr[a][b];
						if (isSquareNum(now))
						{
							ans = max(ans, now);

						}
						a += x;
						b += y;
					}
					if (isSquareNum(now)) ans = max(ans, now);
				}
			}
		}
		
	}


	cout << ans << "\n";
	
}
