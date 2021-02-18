#include <iostream>


using namespace std;

int temp;

// f(n) = f(n-1) * f(n-2)

//long long f(int n)
//{

//	if (n == 0)
//		return 1;

//	n = n * f(n - 1);

//	return n;

//}

int main()
{
	int N;
	

	cin >> N;

	if (N == 0)
	{
		cout << 0;
		return 0;
	}

	int result = 0;

	for (int i = 2; i <= N; i++) {
		if (i % 5 == 0)
		{
			result++;
		}
		if (i % 25 == 0)
		{
			result++;
		}
		if (i % 125 == 0)
		{
			result++;
		}
	}

	cout << result;
	return 0;

}