#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;
vector<char> result;
stack<char> s;
stack<char> c;
string m;
int M;
int main(void)
{
	char input;
	cin >> m;

	for (int i = 0; i < size(m); i++)
	{
		s.push(m[i]);
	}

	cin >> M;

	//스택 두개로 해결해보기

	for (int i = 0; i < M; i++)
	{
		char temp;

		cin >> temp;

		switch (temp)
		{
		case 'L' : 
			if (!s.empty())
			{
				c.push(s.top());
				s.pop();
			}
			break;
		case 'D' :
			if (!c.empty())
			{
				s.push(c.top());
				c.pop();
			}
			break;
		case 'B' :
			if (!s.empty())
			{
				s.pop();
			}
			break;
		case 'P' :
			cin >> input;
			s.push(input);
			break;
		}
	}

	while (!c.empty())
	{
		s.push(c.top());
		c.pop();
	}

	int tempsize = s.size();

	for (int i = 0; i < tempsize; i++)
	{
		result.push_back(s.top());
		s.pop();
	}

	for (int i = tempsize - 1; i >= 0; i--)
	{
		cout << result[i];
	}

	return 0;
}

