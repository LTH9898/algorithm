#include <iostream>
#include <queue>
using namespace std;

struct tomato {
	int x;
	int y;
	int z;
};

int m, n, h, ans;
int board[101][101][101] = { 0 };
int dist[101][101][101] = { 0 };

int dx[] = { -1, 1, 0, 0, 0, 0 };
int dy[] = { 0, 0, -1, 1, 0, 0 };
int dz[] = { 0, 0, 0, 0, -1, 1 };

queue<tomato> q;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> m >> n >> h;
	queue<tomato> q;

	for (int k = 0; k < h; k++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int i = 0; i < m; i++)
			{
				cin >> board[i][j][k];
				if (board[i][j][k] == 1)
				{
					q.push({ i, j, k });
				}
				if (board[i][j][k] == 0)
				{
					dist[i][j][k] = -1;
				}
			}
		}
	}
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int dir = 0; dir < 6; dir++)
		{
			int nx = cur.x + dx[dir];
			int ny = cur.y + dy[dir];
			int nz = cur.z + dz[dir];
			if (nx < 0 || nx >= m || ny < 0 || ny >= n || nz <0 || nz >= h)
				continue;
			if (dist[nx][ny][nz] >= 0)
				continue;
			dist[nx][ny][nz] = dist[cur.x][cur.y][cur.z] + 1;
			q.push({ nx,ny,nz });
		}
	}
	int ans = 0;
	for (int k = 0; k < h; k++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int i = 0; i < m; i++)
			{
				if (dist[i][j][k] == -1) {
					cout << -1;
					return 0;
				}
				ans = max(ans, dist[i][j][k]);
			}
		}
	}
	cout << ans;
}
