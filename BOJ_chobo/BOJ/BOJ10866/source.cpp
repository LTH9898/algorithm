#include <iostream>
#include <string>
#include <deque>
using namespace std;

deque<int> deq;

int main(void)
{
	int N;

	string m;
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> m;
		int X;
		if (m == "push_back")
		{
			cin >> X;
			deq.push_back(X);
		}
		
		if (m == "push_front")
		{
			cin >> X;
			deq.push_front(X);
		}
		
		if (m == "pop_front")
		{
			if (deq.empty() == 0)
			{
				cout << deq.front() << "\n";
				deq.pop_front();
			}

			else if (deq.empty() == 1)
			{
				cout << -1 << "\n";
			}
		}

		if (m == "pop_back")
		{
			if (deq.empty() == 0)
			{
				cout << deq.back() << "\n";
				deq.pop_back();
			}

			else if (deq.empty() == 1)
			{
				cout << -1 << "\n";
			}
		}

		if (m == "size")
		{
			cout << deq.size() << "\n";
		}

		if (m == "empty")
		{
			if (deq.empty() == 1)
			{
				cout << 1 << "\n";
			}
			else if (deq.empty() == 0)
			{
				cout << 0 << "\n";
			}
		}

		if (m == "front")
		{
			if (deq.empty() == 1)
				cout << -1 << "\n";
			else
				cout << deq.front() << "\n";
		}

		if (m == "back")
		{
			if (deq.empty() == 1)
				cout << -1 << "\n";
			else
				cout << deq.back() << "\n";
		}
	}

	return 0;

}