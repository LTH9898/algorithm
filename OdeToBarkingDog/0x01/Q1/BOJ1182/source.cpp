#include <iostream>
#include <vector>
using namespace std;

int N;
int S;
vector<int> v;
int cnt = 0;

void func(int cur, int tot) {
	if (cur == N) {
		if (tot == S) cnt++;
		return;
	}
	func(cur + 1, tot);
	func(cur + 1, tot + v[cur]);
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> S;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}

	func(0, 0);
	if (S == 0) cnt--;
	cout << cnt;

	

	


}