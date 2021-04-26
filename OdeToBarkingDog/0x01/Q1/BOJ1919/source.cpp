#include <iostream>
#include <string>
#include <string.h>

using namespace std;

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
		int tempB = 0;

		tempA = A[i] - 'a';
		tempB = B[i] - 'b';
		arr[tempA]++;
		arr[tempB]--;
	}
	
}