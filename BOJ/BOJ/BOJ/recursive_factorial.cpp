#include <iostream>

using namespace std;

int N;
int result;

int Factorial(int A)
{
	if (A == 1 || A == 0)
		return 1;

	return A * Factorial(A - 1);
}



int main(void)
{
	cin >> N;

	cout << Factorial(N);

	return 0;
}