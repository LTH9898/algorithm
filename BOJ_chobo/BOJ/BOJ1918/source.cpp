#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool priority(char a1, char a2) {
	if (a1 == '+' || a1 == '-') {
		if (a2 == '*' || a2 == '/' || a2 == '+' || a2 == '-')
			return true;
	}

	else if (a1 == '*' || a1 == '/')
	{
		if (a2 == '*' || a2 == '/')
			return true;
	}


	return false;


}


int main()
{
	string str;

	cin >> str;

	string ans;
	stack<char> s;

	int length = str.length();


	for (int i = 0; i < length; i++)
	{
		if (str[i] == '(') {
			s.push(str[i]);
		}
		else if (str[i] == ')')
		{
			while (!s.empty() && s.top() != '(')
			{
				ans += s.top();
				s.pop();
			}
			s.pop();
		}
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {

			while (!s.empty() && priority(str[i], s.top())) {
				ans += s.top();
				s.pop();
			}
			s.push(str[i]);
		}
		else
		{
			ans += str[i];
		}
	}

	while (!s.empty()) {
		ans += s.top();
		s.pop();
	}

	cout << ans;

	return 0;

}
