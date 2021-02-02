#include <iostream>
#include <stack>
#include <vector>
using namespace std;

stack<int> s;

int main()
{
	int j = 0;
	int n;
	cin >> n;

	vector<int> seq; // ¼ö¿­
	stack<int> s;
	vector<char> arr2;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		seq.push_back(k);
	}

	for (int i = 0; i < n; i++)
	{
		s.push(i+1);
		arr2.push_back('+');
		
		while(!s.empty() && s.top() == seq[j]) {
			s.pop();
			arr2.push_back('-');
			j++;
		}


	}

	if (!s.empty())
		cout << "NO\n";
	else
	{
		for (int i = 0; i < arr2.size(); i++)
		{
			cout << arr2[i] << "\n";
		}
	}


	return 0;
}