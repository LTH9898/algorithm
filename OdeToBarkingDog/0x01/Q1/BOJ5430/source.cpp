#include <iostream>
#include <deque>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int TC;
	int mode;
	cin >> TC;

	for (int i = 0; i < TC; i++)
	{
		string method;
		cin >> method;

		int num;
		cin >> num;

		string arr;
		cin >> arr;
		
		deque<int> dq;

		string temp;
		for (int i = 0; i < arr.length(); i++)
		{
			if (arr[i] == '[')
				continue;
			else if ('0' <= arr[i] && arr[i] <= '9')
			{
				temp += arr[i];
			}
			else if (arr[i] == ',' || arr[i] == ']')
			{
				if (!temp.empty())
				{
					dq.push_back(stoi(temp));
					temp.clear();
				}
			}
		}
		mode = 0;

		for (int i = 0; i < method.size(); i++)
		{
			if (method[i] == 'R' && mode == 0)
			{
				mode = 1;
			}
			else if (method[i] == 'R' && mode == 1)
			{
				mode = 0;
			}
			else if (mode == 0)
			{
				if (dq.empty() == 1)
				{
					mode = 2;
					break;
				}
				dq.pop_front();
			}
			else if (mode == 1)
			{
				if (dq.empty() == 1)
				{
					mode = 2;
					break;
				}
				dq.pop_back();
			}	
		}

		if (mode == 2)
		{
			cout << "error!";
		}
		else if (mode == 0)
		{
			cout << "[";
			for (int i = 0; i < dq.size(); i++)
			{
				cout << dq[i];
				cout << ",";
			}
			cout << "]";
		}
		else if (mode == 1)
		{
			cout << "[";
			int i = dq.size();
			for (i; i > 0; i--)
			{
				cout << dq[i];
				cout << ",";
			}
			cout << "]";
		}
		
	}

}
