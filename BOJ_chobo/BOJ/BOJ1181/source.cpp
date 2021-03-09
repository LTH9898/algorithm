#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	else
	{
		return a.length() < b.length();
	}
}



int main() {
	string str;
	int N;
	vector<string> v;
	string temp;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++)
	{
		if (str == v[i])
		{
			continue;
		}
		cout << v[i] << "\n";
		str = v[i];
	}

	return 0;

	
}