#include <iostream>
#include <string>
#include <string.h>
#include <queue>
using namespace std;



queue<int> q;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string S;
	int N;
	
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> S;

		if (S == "push")
		{
			cin >> num;
			q.push(num);
		}
		else if (S == "pop")
		{
			if (q.empty() == 1)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (S == "size")
		{
			cout << q.size() << "\n";
		}
		else if (S == "empty")
		{
			if (q.empty() == 1)
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else if (S == "front")
		{
			if (q.empty() == 1)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << q.front() << "\n";
			}
		}
		else if (S == "back")
		{
			if (q.empty() == 1)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << q.back() << "\n";
			}
		}
	}

	
}


