#include <iostream>
#include <cstring>
#include <string>
#include <String.h>
#include <algorithm>
using namespace std;

int main()
{
	int T;
	string m;
	cin >> T;
	cin.ignore();
	while(T--)
	{
		string s;
		getline(cin, s);

		string temp;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == ' ')
			{
				reverse(temp.begin(), temp.end());
				cout << temp << " ";
				temp.clear();
			}
			else
				temp += s[i];
		}
		
		reverse(temp.begin(), temp.end());
		cout << temp << endl;
	
	}
	
	
	return 0;
}