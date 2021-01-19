#include <iostream>
#include <string.h>

using namespace std;

int get_max(int a, int b) {
	return a > b ? a : b;
}


int main() {

	char s1[1001];
	char s2[1001];

	scanf("%s %s", s1, s2);
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	int dp[len1 + 1][len2 + 1];
	int i, j, ans = 0;

	for (i = 0; i <= len1; i++)
	{
		for (j = 0; j <= len2; j++) {
			if (s1[i - 1] == s2[j - 1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = get_max(dp[i - 1][j], dp[i][j - 1]);
		}
	}

	printf("%d\n", dp[len1][len2]);

	return 0;
}

