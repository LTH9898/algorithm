#include <iostream>
#include <cstring>

using namespace std;

int a, b, c;
int cache[21][21][21];

int w(int a, int b, int c)
{
	if (a <= 0 || b <= 0 || c <= 0)
		return 1;

	if (a > 20 || b > 20 || c > 20)
		return w(20, 20, 20);

	int& ret = cache[a][b][c];
	if (ret != -1)
		return ret;

	if (a < b && b < c)
		ret = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
	else
		ret = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
	return ret;
}

int main(void)
{

	memset(cache, -1, sizeof(cache));

	while (1)
	{
		cin >> a;
		cin >> b;
		cin >> c;
		if (a == -1 && b == -1 && c == -1)
			break;

		cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << endl;

	}

	return 0;
}