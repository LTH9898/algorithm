#include <iostream>
#include <cstring>

using namespace std;

int n, board[101][101];
int cache[101][101];

int jump(int y, int x)
{
	if (y >= n || x >= n)
		return 0;

	if (y == n - 1 && x == n - 1)
		return 1;

	int& ret = cache[y][x];

	if (ret != -1) return ret;
	int jumpSize = board[y][x];


	return ret = (jump(y + jumpSize, x) || jump(y, x + jumpSize));
}

int main(void)
{


	int TC;

	cin >> TC;
	
	while (TC--)
	{
		cin >> n;
		memset(cache, -1, sizeof(cache));
		
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> board[i][j];
			}
		}

		int result = jump(0, 0);

		if (result == 1)
			cout << "YES\n";
		else
			cout << "NO\n";

		memset(cache, -1, sizeof(cache));
	}

	return 0;
	

	

}