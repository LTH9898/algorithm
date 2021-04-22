#include <iostream>
#include <vector>

using namespace std;

int arr[101] = { 0, };


int func2(int *arr, int a)
{
	for (int i = 0; i < a; i++)
	{
		int temp;
		int temp2;
		cin >> temp;
		temp2 = 100 - temp;
		if (temp == temp2)
		{
			continue;
		}
		arr[temp] = 1;
		if (arr[temp2] == 1)
		{
			return 1;
			break;
		}
		else
		{
			continue;
		}
	}
	return 0;
}

int main()
{
	int N;
	cin >> N;
	cout << func2(arr, N);
	
}