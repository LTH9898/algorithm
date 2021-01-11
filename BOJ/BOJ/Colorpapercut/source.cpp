#include <iostream>
#include <vector>
#include <string>
using namespace std;

int map[130][130];

int Wpaper = 0;
int Bpaper = 0;
int TC;

//bool check(int map1, int map2)
//{
//	if (map1 == map2)
//		return true;
//	else
//		return false;
//}


void solve(int one, int two, int three, int four)
{
	int temp = map[one][two];

	for(int i = one; i < three; ++i){
		for (int j = two; j < four; ++j) {
			if (temp == 0 && map[i][j] == 1)
			{
				temp = 2;
			}
			else if (temp == 1 && map[i][j] == 0)
			{
				temp = 2;
			}

			if (temp == 2)
			{
				solve(one, two, (one + three) / 2, (two + four) / 2);
				solve((one + three) / 2, (two + four) / 2, three, four);
				solve(one, (two + four) / 2, (one + three) / 2, four);
				solve((one + three) / 2, two, three, (two + four) / 2);
				return;
			}
		}
	}

	if (temp == 0)
	{
		++Wpaper;
	}

	else if (temp == 1)
	{
		++Bpaper;
	}
}




int main(void)
{
	int N;
	cin >> N;

	memset(map, 0, sizeof(map));


	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)		
		{
			cin >> map[i][j];
		}
	}
	solve(0, 0, N, N);

	cout << Wpaper << endl;
	cout << Bpaper << endl;

	return 0;



}

