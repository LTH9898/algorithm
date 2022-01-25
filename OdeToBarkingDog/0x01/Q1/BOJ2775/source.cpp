#include <iostream>

using namespace std;

int TC;
int k;
int n;
int DP[15][15];


int main() {

	cin >> TC;

	for (int i = 0; i <= 14; i++)
	{
		DP[0][i] = i;
	}

	for (int i = 1; i <= 14; i++)
	{
		for (int j = 1; j <= 14; j++)
		{
			DP[i][j] = DP[i - 1][j] + DP[i][j - 1];

		}
	}
	
	while (TC--)
	{
		cin >> k;
		cin >> n;
		
		cout << DP[k][n];
		cout << "\n";
	}
}