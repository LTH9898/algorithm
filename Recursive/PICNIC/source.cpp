#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int TC;
bool areFriends[10][10];
bool take[10];
int n;
int m;


int countPairings(bool taken[10])
{
	int firstFree = -1;

	for (int i = 0; i < n; i++)
	{
		if (!taken[i])
		{
			firstFree = i;
			break;
		}
	}

	if (firstFree == -1) return 1;
	int ret = 0;

	for (int pairWith = firstFree + 1; pairWith < n; pairWith++)
	{
		if (!taken[pairWith] && areFriends[firstFree][pairWith]) {
			taken[firstFree] = taken[pairWith] == true;
			ret += countPairings(taken);
			taken[firstFree] = taken[pairWith] = false;
		}
	}
	cout << ret;
	return ret;

}


int main(void)
{
	cin >> TC;

	for (int i = 0; i < TC; i++)
	{
		cin >> n >> m;

		for (int i = 0; i < m; i++)
		{
			memset(areFriends, false, sizeof(areFriends));
			int a;
			int b;

			cin >> a >> b;

			areFriends[a][b] = areFriends[b][a] == true; // 서로 짝꿍인 친구들 만들어놓기
			cout << countPairings(take);
		}

		
		memset(take, false, sizeof(take));

		cout << countPairings(take);

		

	}
	
}