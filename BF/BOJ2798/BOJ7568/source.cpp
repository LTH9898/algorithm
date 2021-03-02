#include <iostream>
#include <vector>

using namespace std;


int main()
{
	pair <int, int> person;
	vector <pair<int, int>> v;
	pair <int, int> temp;
	vector <int> result;
	int cnt;
	int N;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> person.first;
		cin >> person.second;

		v.push_back(person);
	}

	for (int i = 0; i < N; i++)
	{
		cnt = 0;
		temp.first = v[i].first;
		temp.second = v[i].second;
		for (int j = 0; j < N; j++)
		{
			if (temp.first < v[j].first && temp.second < v[j].second)
			{
				cnt++;
			}
		}
		result.push_back(cnt + 1);
	}

	for (int i = 0; i < N; i++)
	{
		cout << result[i] << " ";
	}

	return 0;

}