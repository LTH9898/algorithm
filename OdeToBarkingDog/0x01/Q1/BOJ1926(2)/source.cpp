#include <iostream>
#include <queue>
using namespace std;

int pic[502][502];
int visited[502][502];
int num, mx;
int dx[4] = { 1, 0,  -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int main()
{
	int height, width;

	cin >> height >> width;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cin >> pic[i][j];
		}
	}
	num = 0;
	mx = 0;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (pic[i][j] == 0 || visited[i][j] == 1)
			{
				continue;
			}
			num++;
			queue<pair<int, int>> q;
			visited[i][j] = 1;
			q.push({ i, j });
			int size = 0;
			while (!q.empty()) {
				size++;
				pair<int, int> cur = q.front();
				q.pop();
				for (int dir = 0; dir < 4; dir++)
				{
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];
					if (nx < 0 || nx >= height || ny < 0 || ny >= width)
						continue;
					if (visited[nx][ny] == 1 || pic[nx][ny] != 1)
						continue;
					visited[nx][ny] = 1;
					q.push({ nx, ny });
				}
			
			}

			mx = max(mx, size);
		}
	}

	cout << num << '\n' << mx;
}