#include <iostream>
#include <stack>
#include <utility>
using namespace std;

int N;
int K;
stack<pair<int, int>> st;

int main()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> K;
		while (!st.empty()) {
			if (st.top().second > K) {
				cout << st.top().first << ' ';
				break;
			}
			st.pop();
		}

		if (st.empty())
		{
			cout << 0 << ' ';
		}
		st.push(make_pair(i, K));
	}
}