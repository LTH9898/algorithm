#include <iostream>

using namespace std;

int start = 666;


int main()
{
	int N;
	int temp = 1;
	int result = 1;
	cin >> N;
	

	while (1)
	{
		
		if (N == 1) {
			break;
		}

		if (N == result) {
			break;
		}

		start = start + 1;

		int newNum = start;
		int cnt = 0;
		while (1)
		{
			if (cnt == 2)
			{
				result++;
				break;
			}

			if (newNum == 0)
			{
				break;
			}

			if (newNum % 10 == 6)
			{
				cnt++;
				newNum = newNum / 10;
			}

			if (newNum % 10 != 6)
			{
				cnt = 0;
				newNum = newNum / 10;
			}
		}
		
	}


	cout << start;

	return 0;
}