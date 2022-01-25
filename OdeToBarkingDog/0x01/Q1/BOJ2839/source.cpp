#include <iostream>

using namespace std;

int main() {

	int N;
	int result = 0;

	cin >> N;
	while (N >= 0) {
		if (N % 5 == 0) {
			result = result + (N / 5);
			cout << result;
			return 0;
		}

		N = N - 3;
		result++;

	}

	cout << -1;

}