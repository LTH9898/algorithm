#include <iostream>
#include <vector>
using namespace std;

int main() {
	int count = 0;
	int N;
	int target;
	vector<int> v;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}

	cin >> target;

	for (int i = 0; i < N; i++)
	{
		if (v[i] == target)
			count++;
	}

	cout << count;
}