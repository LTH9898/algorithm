#include <iostream>
#include <cstring>
using namespace std;

char tri[3][6] = { "  *  ", " * * ", "*****" };

char MAP[6000][7000];

void divide(int n, int y, int x)
{
	if (n == 1) // 기저 조건
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				MAP[y + i][x + j] = tri[i][j];
			}
		}
		return;
	}

	divide(n / 2, y, x + 3 * n / 2);
	divide(n / 2, y + 3 * n / 2, x);
	divide(n / 2, y + 3 * n / 2, x + 3 * n);
	
}

int main(void)
{
	int n;
	cin >> n;
	memset(MAP, 32, sizeof(MAP)); // 핵심이다. 이문제에서 초기화를 안해주면 공백이 아닌 null 문자로 출력되기 때문에 꼭 초기화를 해줘야 한다.
	divide(n / 3, 0, 0);
	for (int i = 0; i < n; i++)
	{
		if (i != 0)
		{
			cout << '\n';
		}
		
		 // 세로줄 하나 출력하고 줄바꾸기.
		for (int j = 0; j < n * 2 - 1 ; j++)
		{
			cout << MAP[i][j];
			
		}
	}
	return 0;
}