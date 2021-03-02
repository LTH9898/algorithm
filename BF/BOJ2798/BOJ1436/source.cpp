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
			cout << start;
			break;
		}

		start = start + 1;

		int newNum = start;
		int cnt = 0;
		while (1)
		{
			if (newNum % 10 == 6)
			{
				cnt++;
				newNum = newNum / 10;
			}

			if (cnt == 3)
			{
				result++;
				break;
			}
		}
		
	}

}