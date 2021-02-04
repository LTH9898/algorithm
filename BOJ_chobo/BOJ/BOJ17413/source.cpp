#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
	int check = 0;
	string m;
	getline(cin, m);
	stack<char> s;
	for (int i = 0; i < m.length(); i++)
	{
		if (m[i] == '<') {
			while (!s.empty()) {
				cout << s.top();
				s.pop();
			}
			cout << "<";
			check = 1;
		}
		else if (m[i] == '>')
		{
			cout << ">";
			check = 0;
		}

		else if (check == 1)
		{
			cout << m[i];
		}

		else if (m[i] == ' ')
		{
			while (!s.empty())
			{
				cout << s.top();
				s.pop();
			}
			cout << " ";
		}

		else
			s.push(m[i]);
	}

	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}

	return 0;
}

