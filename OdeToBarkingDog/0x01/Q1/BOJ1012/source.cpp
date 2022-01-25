#include <iostream>
#include <queue>

using namespace std;

int TC;
int M;
int N;
int Bnum;
int K;
int board[52][52];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

bool visited[52][52];

int main() {
	cin >> TC;
	for (int i = 0; i < TC; i++)
	{
		cin >> M >> N;
		cin >> Bnum;
		int result = 0;

		for (int i = 0; i < M; i++)
		{
			fill(board[i], board[i] + N, 0);
			fill(visited[i], visited[i] + N, 0);
		}

		for (int i = 0; i < Bnum; i++)
		{
			int X;
			int Y;

			cin >> X >> Y;

			board[X][Y] = 1;
		}

		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (board[i][j] == 0 || visited[i][j] == 1)
				{
					continue;
				}
				result++;
				queue<pair<int, int>> q;
				visited[i][j] = 1;
				q.push({ i,j });
				while (!q.empty())
				{
					auto cur = q.front();
					q.pop();
					for (int dir = 0; dir < 4; dir++)
					{
						int nx = cur.first + dx[dir];
						int ny = cur.second + dy[dir];
						if (nx < 0 || nx >= M || ny < 0 || ny >= N)
						{
							continue;
						}
						if (visited[nx][ny] || board[nx][ny] != 1)
						{
							continue;
						}
						visited[nx][ny] = 1;
						q.push({ nx, ny });
					}
				}
			}
			
		}
		cout << result << "\n";

	}
	return 0;
} 