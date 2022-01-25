#include <iostream>

using namespace std;

int main() {

	int N;
	int K;
	int A = 1;
	int B = 1;
	int result;
	cin >> N >> K;

	for (int i = N; i > N - K; i--)
	{
		A = A * i;
	}

	for (int i = K; i > 0; i--)
	{
		B = B * i;
	}

	result = A / B;


}