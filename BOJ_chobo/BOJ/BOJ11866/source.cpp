#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> v;
queue<int> q1;
int main() {
	int N;
	int K;

	cin >> N >> K;

	int count = 1;

	for (int i = 0; i < N; i++)
	{	
		q1.push(i + 1);
	}

	while(q1.size() != 0)
	{
		if (count < K)
		{
			q1.push(q1.front());
			q1.pop();
			count++;
		}
		else
		{
			v.push_back(q1.front());
			q1.pop();
			count = 1;
		}
	}
	cout << '<';
	for (int i = 0; i < N; i++)
	{
		
		cout << v[i];
		if (i != N - 1)
		{
			cout << ',';
			cout << ' ';
		}
	}
	cout << '>';

	return 0;
}