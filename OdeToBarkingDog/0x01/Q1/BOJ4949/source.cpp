#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	stack<char> s;
	string words;
	
	while (1)
	{
		int isFind = 0;
		getline(cin, words);
		if (words[0] == '.')
		{
			break;
		}
		for (int i = 0; i < words.length(); i++){
			if (words[i] == '.')
			{
				words.clear();
				break;
			}

			if (words[i] == '(')
			{
				s.push('(');
			}

			else if (words[i] == '[')
			{
				s.push('[');
			}

			else if (words[i] == ')')
			{
				if (s.empty() == 0 && s.top() == '(')
				{
					s.pop();
				}
				else if (s.empty() == 1)
				{
					cout << "no";
					isFind = 1;
					break;
				}
				else if (s.top() == '[')
				{
					cout << "no";
					isFind = 1;
					break;
				}
			}
			else if (words[i] == ']')
			{
				if (s.empty() == 0 && s.top() == '[')
				{
					s.pop();
				}
				else if (s.empty() == 1)
				{
					cout << "no";
					isFind = 1;
					break;
				}
				else if (s.top() == '(')
				{
					cout << "no";
					isFind = 1;
					
					break;
				}
			}
		}

		if (s.empty() == 1 && isFind == 0)
		{
			cout << "yes" << '\n';
		}
		else if (s.empty() == 0 && isFind == 0)
		{
			cout << "no" << '\n';
			while (s.empty() == 1)
			{
				s.pop();
			}
		}
		else if (s.empty() == 0 && isFind == 1)
		{
			while (1)
			{
				if (s.empty() == 1)
				{
					break;
				}
				s.pop();
			}
		}
	}
	

	

	return 0;
}