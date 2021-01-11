#include <iostream>

using namespace std;

int n;

int pibo(int a)
{
	if (a == 0)
		return 0;
	if (a == 1)
		return 1;
	return pibo(a - 2) + pibo(a - 1);
}

int main()
{
	cin >> n;
	cout << pibo(n);

	return 0;
}