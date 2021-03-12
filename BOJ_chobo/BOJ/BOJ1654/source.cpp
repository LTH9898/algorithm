#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
	if (a > b)
		return false;
	else
		return true;
}


int main() {
	
	int K;
	int N;
	
	vector<long long> v;

	cin >> K >> N;

	for (int i = 0; i < K; i++)
	{
		long long temp;
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end(), compare);

	long long num = v[0];


	while (num != 0)
	{
		long long sum = 0;
		for (int i = 0; i < K; i++)
		{
			sum += v[i] / num;
		}
		if (sum == N)
		{
			break;
		}
		else
		{
			num--;
		}
	}

	cout << num;
	

	return 0;

}