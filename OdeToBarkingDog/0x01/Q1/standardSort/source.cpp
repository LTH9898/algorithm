#include <iostream>

using namespace std;

int arr[10] = { 3, 2, 7, 116, 62, 235, 1, 23, 55, 77 };
int n = 10;


int main() {
	for (int i = n - 1; i > 0; i--)
	{
		int mxidx = 0;
		for (int j = 1; j <= i; j++)
		{
			if (arr[mxidx] < arr[j])
				mxidx = j;
		}
		swap(arr[mxidx], arr[i]);
	}

	for (int i = 0; i < n - 1; i++)
	{
		cout << arr[i] << " ";
	}
}

