#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int result = 0;

int main()
{
	string A;
	string B;
	int arr[40];

	memset(arr, 0, sizeof(arr));
	cin >> A;
	cin >> B;

	for (int i = 0; i < A.length(); i++)
	{
		int tempA = 0;
		

		tempA = A[i] - 'a';
		
		arr[tempA]++;
		
	}

	for (int i = 0; i < B.length(); i++)
	{
		int tempB = 0;

		tempB = B[i] - 'a';

		arr[tempB]--;
	}
	

	for (int i = 0; i < 26; i++)
	{
		if (arr[i] < 0)
		{
			result = result + (arr[i] * -1);
		}
		else if (arr[i] > 0)
		{
			result = result + (arr[i]);
		}
	}

	cout << result;
}