#include <iostream>
#include <stack>
using namespace std;
#define X first
#define Y second

int board[502][502] = { 0 };
bool visited[502][502];
int n = 7, m = 10;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	stack<pair<int, int>> s;
	visited[0][0] = 1;
	s.push({ 0,0 });

	while (!s.empty()) {
		pair<int, int> cur = s.top(); s.pop();
		cout << '(' << cur.X << ", " << cur.Y << ") -> ";
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (visited[nx][ny] || board[nx][ny] != 1)
				continue;
			visited[nx][ny] = 1;
			s.push({ nx, ny });
		}
	}
}