#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2)
		return -1;

	if (num1 > num2)
		return 1;

	return 0;
}

int main() {

	int a, b, c;
	int arr[3] = { 0, };

	while (1)
	{
		cin >> a >> b >> c;
			
		arr[0] = a;
		arr[1] = b;
		arr[2] = c;
		

		qsort(arr, sizeof(arr)/sizeof(int), sizeof(int), compare);

		int a1 = arr[0];
		int a2 = arr[1];
		int a3 = arr[2];

		if (a + b + c == 0)
		{
			break;
		}

		if (pow(a1, 2) + pow(a2, 2) == pow(a3, 2))
		{
			cout << "right" << "\n";
		}

		else {
			cout << "wrong" << "\n";
		}

		
	}

	return 0;
}