#include <iostream>
#include <queue>

using namespace std;
string board[102];
int visited[102][102];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	queue<pair<int, int>> q;
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) fill(visited[i], visited[i] + M, -1);
	for (int i = 0; i < N; i++)
	{
		cin >> board[i];
	}
	
	int ans = 0;
	q.push({ 0,0 });
	visited[0][0] = 0;
	while (!q.empty())
	{
		pair<int, int> p = q.front(); q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = p.first + dx[i];
			int ny = p.second + dy[i];

			if (nx < 0 || nx >= N || ny < 0 || ny >= M)
			{
				continue;
			}
			if (board[nx][ny] != '0' || visited[nx][ny] >= 0)
			{
				continue;
			}
			visited[nx][ny] = visited[p.first][p.second] + 1;
			q.push({ nx, ny });
		}
	}

	
	cout << visited[N - 1][M - 1] + 1;
}