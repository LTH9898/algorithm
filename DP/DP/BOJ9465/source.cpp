#include <iostream>

using namespace std;

int sticker[2][100000] = { 0 };
int dp[3][100000] = { 0 };


int max(int a, int b, int c)
{
	int max = a;
	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}

	return max;
}


int main()
{
	int T;
	int n;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> n;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < n; j++)
			{
				int num;
				cin >> num;
				sticker[i][j] = num;
			}
		}

		dp[0][0] = 0;
		dp[1][0] = sticker[0][0];
		dp[2][0] = sticker[1][0];

		for (int i = 1; i < n; i++)
		{
			dp[0][i] = max(dp[0][i - 1], dp[1][i - 1], dp[2][i - 1]);
			dp[1][i] = max(dp[0][i - 1], 0, dp[2][i - 1]) + sticker[0][i];
			dp[2][i] = max(dp[0][i - 1], dp[1][i - 1], 0) + sticker[1][i];
		}


		int result = 0;
		result = max(dp[0][n - 1], dp[1][n - 1], dp[2][n - 1]);
		cout << result;
	}

	return 0;

}