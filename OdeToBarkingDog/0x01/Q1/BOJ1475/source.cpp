#include <iostream>
#include <string>
#include <string.h>
using namespace std;

string num;
int arr[12];


int main()
{
	memset(arr, 0, sizeof(arr));
	cin >> num;
	
	for (int i = 0; i < num.length(); i++)
	{
		cout << num[i] << endl;
		arr[num[i]] = arr[num[i]] + 1;
		cout << arr[9];
	}

	int largestNum = 5;
	int largestIndex = 1;

	for (int i = 1; i <= 8; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			largestNum = arr[i + 1];
			largestIndex = i + 1;
		}
	}

	if(largestIndex == 6 || largestIndex == 9)
	{
		int temp;
		temp = arr[6] + arr[9];
		if (temp % 2 == 0)
		{
			largestNum = largestNum / 2;
		}
		else
		{
			largestNum = (largestNum / 2) + 1;
		}
	}


	cout << largestNum;
	
	return 0;
}