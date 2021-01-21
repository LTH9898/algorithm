#include <iostream>
#include <cstring>
using namespace std;

char tri[3][6] = { "  *  ", " * * ", "*****" };

char MAP[6000][7000];

void divide(int n, int y, int x)
{
	if (n == 1) // ���� ����
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
	memset(MAP, 32, sizeof(MAP)); // �ٽ��̴�. �̹������� �ʱ�ȭ�� �����ָ� ������ �ƴ� null ���ڷ� ��µǱ� ������ �� �ʱ�ȭ�� ����� �Ѵ�.
	divide(n / 3, 0, 0);
	for (int i = 0; i < n; i++)
	{
		if (i != 0)
		{
			cout << '\n';
		}
		
		 // ������ �ϳ� ����ϰ� �ٹٲٱ�.
		for (int j = 0; j < n * 2 - 1 ; j++)
		{
			cout << MAP[i][j];
			
		}
	}
	return 0;
}