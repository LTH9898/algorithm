#include <iostream>
#include <vector>
#include <math.h>
using namespace std;


int main() {

	double N;
	double result = 0;
	cin >> N;

	for (int i = 1; i <= 1000000; i++)
	{
		int temp = i;
		int sum = 0;
		int cnt = 0;
		while (1)
		{
			sum += (temp % 10);// * pow(10, cnt);
			cnt++;
			temp = temp / 10;
			if (temp / 10 == 0)
			{
				sum += (temp % 10);// * pow(10, cnt);
				break;
			}
		}

		sum += i;
		
		if (sum == N)
			{
				result = i;
				break;
			}



	}

	cout << result;

	return 0;

}