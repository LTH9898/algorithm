#include <iostream>

using namespace std;

int main() {

	int x, y, w, h;
	int result;

	cin >> x >> y >> w >> h;
	int x1 = 0;
	int y1 = 0;
	int xDis;
	int yDis;

	result = w - x;

	if (result > h - y)
	{
		result = h - y;
	}
	if (result > x)
	{
		result = x;
	}
	if (result > y)
	{
		result = y;
	}

	cout << result;

	return 0;
}