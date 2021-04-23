#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int girls[10];
int boys[10];


int main() {

	memset(girls, 0, sizeof(girls));
	memset(boys, 0, sizeof(boys));
	int N;
	int K;

	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		int S;
		int Y;
		cin >> S >> Y;

		if (S == 0)
		{
			girls[Y]++;
		}
		else if(S == 1)
		{
			boys[Y]++;
		}
		
	}

	int boyroom = 0;
	int girlroom = 0;
	int result = 0;

	for (int i = 1; i <= 6; i++)
	{
		if (boys[i] == 0)
		{
			continue;
		}



		else if (boys[i] - K > 0)
		{
			while (boys[i] - K > 0)
			{
				boyroom++;
				boys[i] = boys[i] - K;
				if (boys[i] - K <= 0)
				{
					boyroom++;
				}
			}
		}

		else if(boys[i] - K <= 0)
		{
			boyroom++;
		}
	}

	for (int i = 1; i <= 6; i++)
	{
		if (girls[i] == 0)
		{
			continue;
		}

		else if (girls[i] - K > 0)
		{
			while (girls[i] - K > 0)
			{
				girlroom++;
				girls[i] = girls[i] - K;
				if (girls[i] - K<= 0)
				{
					girlroom++;
				}
			}
		}

		else if (girls[i] - K <= 0)
		{
			girlroom++;
		}
	}

	result = boyroom + girlroom;

	cout << result;


	return 0;
}