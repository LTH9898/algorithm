#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int result = 0;
	int K;
	stack<int> s;
	cin >> K;

	for (int i = 0; i < K; i++)
	{
		int num;

		cin >> num;

		if (num == 0)
		{
			if (s.empty() == 1)
			{
				continue;
			}
			else
			{
				s.pop();
			}
		}
		else
		{
			s.push(num);
		}
	}

	int size = s.size();
	for (int i = 0; i < size; i++)
	{
		result += s.top();
		s.pop();
	}

	cout << result;
}