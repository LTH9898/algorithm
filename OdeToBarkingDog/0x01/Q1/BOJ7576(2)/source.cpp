#include <iostream>
#include <queue>
#define X first
#define Y second

int board[1002][1002] = { 0 };
int dist[1002][1002] = { 0};
int dirX[4] = { 1, 0, -1, 0 };
int dirY[4] = { 0, 1, 0, -1 };

int N, M;

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);	

	queue<pair<int, int>> q;
	cin >> M >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 1)
			{
				q.push({ i,j });
			}
			if (board[i][j] == 0)
			{
				dist[i][j] = -1;
			}
		}
	}

	while (!q.empty())
	{
		auto p = q.front();
		q.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = p.X + dirX[dir];
			int ny = p.Y + dirY[dir];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M)
			{
				continue;
			}
			if (dist[nx][ny] >= 0)
			{
				continue;
			}
			dist[nx][ny] = dist[p.X][p.Y] + 1;
			q.push({ nx, ny });

		}
	}

	int ans = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (dist[i][j] == -1) {
				cout << -1;
				return 0;
			}
			ans = max(ans, dist[i][j]);
		}
	}
	cout << ans;
}
