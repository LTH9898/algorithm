#include <iostream>

using namespace std;

int main() {

	long long n;
	cin >> n;


	int cnt = 1;
	long long range = 1;
	long long temp = 1;

	while (1) {
		if (range >= n) {
			break;
		}
		temp = 6 * (cnt++);
		range += temp;
	}


	cout << cnt;

	return 0;
}