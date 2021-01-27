#include <iostream>
#include <string>

using namespace std;
int cnt= 0;
int N, R, C;

void Z(int size, int row, int col)
{
	if (size == 2)
	{
		if (row == R && col == C)
		{
			cout << cnt;
			return;
		}
		cnt++;

		if (row == R && col + 1 == C)
		{
			cout << cnt;
			return;
		}
		cnt++;

		if (row + 1 == R && col == C)
		{
			cout << cnt;
			return;
		}
		cnt++;

		if (row + 1 == R && col + 1 == C)
		{
			cout << cnt;
			return;
		}
		cnt++;
		return;
	}

	Z(size / 2, row, col);
	Z(size / 2, row, col + size / 2);
	Z(size / 2, row + size / 2, col);
	Z(size / 2, row + size / 2, col + size / 2);

}


int main(void)
{

	cin >> N >> R >> C;

	Z(1 << N, 0, 0);

	return 0;


}