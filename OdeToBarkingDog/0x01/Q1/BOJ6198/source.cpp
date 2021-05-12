#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	long long result = 0;

	int building[80001];

	stack<int> s;

	cin >> N;

	for (int i = 0; i < N;i++)
	{
		int num;		
		cin >> num;

		building[i] = num;

	}

	for (int i = 0; i < N; i++)
	{
		while (s.empty() == 0 && s.top() <= building[i])
		{
			s.pop();
		}

		s.push(building[i]);

		result = result + s.size() - 1;
	}


	cout << result << '\n';

	return 0;
}