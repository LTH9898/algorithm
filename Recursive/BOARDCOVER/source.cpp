#include <iostream>
#include <vector>

using namespace std;

const int coverType[4][3][2] = {
	{ {0 , 0}, {1 , 0}, {0 , 1} },
	{ {0 , 0}, {0 , 1}, {1 , 0} },
	{ {0 , 0}, {0 , 1}, {1 , 1} },
	{ {0 , 0}, {0 , 1}, {1 , -1}}
};

// 다음 색칠할 부분이 검은칸이거나 겹칠경우 false.
// 좌표를 벡터를 이용하여 동적으로 2차원 배열 형성
// vector 
bool set(vector<vector<int> >& board, int y, int x, int type, int delta)
{
	bool ok = true;
	for (int i = 0; i < 3; i++) {
		int ny = y + coverType[type][i][0];
		int nx = x + coverType[type][i][1];
		if (ny < 0 || ny >= board.size() || nx < 0 || nx >= board[0].size())
			ok = false;
		else if ((board[ny][nx] += delta) > 1) // 이미 덮었던 블록일경우
			ok = false;
	}
	return ok;
}

int cover(vector<vector<int> >& board) {
	int y = -1, x = -1;
	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board[i].size(); j++)
			if (board[i][j] == 0) {
				y = i;
				x = j;
				break;
			}
		if (y != -1) break;
	}

	if (y == -1) return 1;
	int ret = 0;
	for (int type = 0; type < 4; type++)
	{
		if (set(board, y, x, type, 1))
			ret += cover(board);

		set(board, y, x, type, -1);
	}
	return ret;
}

int main(void)
{
	vector< vector<int> > yboard;
	vector<int> xboard;

	int TC;
	int H;
	int W;
	int temp[21];
	cin >> TC;

	for (int i = 0; i < TC; i++)
	{
		cin >> H >> W;


		for (int i = 0; i < H; i++)
		{
			for (int k = 0; k < W; k++)
			{
				cin >> temp[k];
			}
			for (int j = 0; j < W; j++)
			{
				int temp = 0;
				cin >> temp;
				if (temp == 35)
				{
					xboard.push_back(1);
				}
				else if (temp == 46)
				{
					xboard.push_back(0);
				}
				yboard.push_back(xboard);

				//cout << yboard[0][0];
			}
			xboard.clear();
		}

		int result = 0;
		//result = cover(yboard);

		cout << result;
	}
	
	return 0;
}