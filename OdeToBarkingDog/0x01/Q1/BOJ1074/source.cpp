#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int N;
int r;
int c;

int cnt = 0;
int result;

void divide(int x, int y, int n) {
	if (r == y && c == x)
	{
		result = cnt;
		return;
	}
	if (r < y + n && r >= y && c < x + n && c >= x) {
		divide(x, y, n / 2);
		divide(x + n / 2, y, n / 2);
		divide(x, y + n / 2, n / 2);
		divide(x + n / 2, y + n / 2, n / 2);
	}
	else {
		cnt += n * n;
	}
}

int main()
{
	cin >> N >> r >> c;
	divide(0, 0, pow(2, N));

	cout << result << "\n";

}