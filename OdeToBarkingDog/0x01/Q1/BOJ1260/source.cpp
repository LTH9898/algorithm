#include <iostream>
#include <stack>
#include <queue>
#define X first
#define Y second
int start;
int board[1002][1002] = { 0 };
bool vis[1002] = { 0 };
using namespace std;
queue<int> q;
int N;
int M;
int V;

void init() {
	for (int i = 1; i <= N; i++)
	{
		vis[i] = 0;
	}
}

void DFS(int i) {
	vis[i] = true;
	cout << i << " ";
	
	for (int j = 0; j <= N; j++)
	{
		if (board[i][j] == 1 && vis[j] == 0) {
			DFS(j);
		}
	}
}

void BFS(int i) {
	q.push(i);
	vis[i] = true;
	cout << i << " ";

	while (!q.empty()) {
		i = q.front();
		q.pop();

		for (int w = 1; w <= N; w++) {
			if (board[i][w] == 1 && vis[w] == 0)
			{
				q.push(w);
				vis[w] = true;
				cout << w << " ";
			}
		}
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N >> M >> V;
	
	for (int i = 0; i < M; i++)
	{
		int a;
		int b;
		cin >> a >> b;
		board[a][b] = 1;
		board[b][a] = 1;
	}

	DFS(V);

	cout << "\n";

	init();
	BFS(V);

	return 0;

}