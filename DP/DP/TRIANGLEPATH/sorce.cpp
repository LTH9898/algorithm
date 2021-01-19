#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;



int triangle[101][101];

int main(void) {
	int C = 0;
	cin >> C;
	
	for (int i = 0; i < C; i++)
	{
		int n = 0;
		cin >> n;
		memset(triangle, 0, sizeof(triangle));
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < j + 1; k++)
			{
				cin >> triangle[j][k];

				if (j >= 1)
				{
					if (k == 0)
					{
						triangle[j][k] += triangle[j - 1][k];
					}
					else if (j == k)
					{
						triangle[j][k] += triangle[j - 1][k - 1];
					}
					else
					{
						triangle[j][k] += max(triangle[j - 1][k], triangle[j - 1][k - 1]);
					}
				}
			}
			
		}

		cout << *max_element(&triangle[n - 1][0], &triangle[n - 1][n + 1]) << "\n";
	}

	return 0;

}