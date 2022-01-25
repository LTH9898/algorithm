#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

void move(int a, int b, int n) {

	if (n == 1)
	{
		cout << a << ' ' << b << "\n";
		return;
	}

	move(a, 6 - a - b, n - 1);
	cout << a << ' ' << b << "\n";
	move(6 - a - b, b, n - 1);
	

}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	cout << (1<<N) - 1 << "\n";
	move(1, 3, N);
}