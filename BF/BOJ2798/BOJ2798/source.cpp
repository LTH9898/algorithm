#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{

	int N;
	int M;
	int result = 0;
	int sum = 0;
	vector<int> d;

	cin >> N >> M;


	for (int i = 0; i < N; i++)
	{
		int temp = 0;
		cin >> temp;
		d.push_back(temp);
	}

	sort(d.begin(), d.end());

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				sum = d[i] + d[j] + d[k];
				if (sum > result && sum <= M)
					result = sum;
			}
		}
	}

	cout << result;

	return 0;
}