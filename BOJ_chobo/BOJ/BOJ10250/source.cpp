#include <iostream>

using namespace std;

int main() {
	int T;

	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int H;
		int W;
		int N;
		int result;

		cin >> H >> W >> N;

		int height = N % H;
		int width = N / H;

		if (height == 0)
		{
			height = H;
			width = width - 1;

		}


		result = height * 100 + (width + 1);

		cout << result << "\n";
	}

	return 0;
}