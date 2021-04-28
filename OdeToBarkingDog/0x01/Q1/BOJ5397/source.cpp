#include <iostream>
#include <list>
#include <string>
#include <string.h>
using namespace std;


int N;

int main() {
	string str;
	cin >> N;

	
	

	for (int i = 0; i < N; i++)
	{
		list<char> L;
		list<char>::iterator t = L.begin();
		cin >> str;

		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == '<')
			{
				if (t == L.begin())
				{
					continue;
				}
				t--;
			}
			
			else if (str[j] == '>')
			{
				if (t == L.end())
				{
					continue;
				}
				t++;
			}
			
			else if (str[j] == '-')
			{
				if (t == L.begin())
				{
					continue;
				}

				t = L.erase(--t);
			}

			else
			{

				L.insert(t, str[j]);
			}
		}

		for (list<char>::iterator it = L.begin(); it != L.end(); it++)
		{
			cout << *it;
		}

		cout << endl;
		

	}


	return 0;

}