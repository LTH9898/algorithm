#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int arr[8001] = { 0 };
vector<int> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	double sansul = 0;
	int mid;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
		

	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++)
	{
		sansul = sansul + v[i];
		
	}

	sansul = sansul / N;

	sansul = round(sansul);

	mid = v[N / 2];

	// 최빈값 구하기
	int max = 0;
	vector<int> maxnum;
	int result;
	for (int i = 0; i < N; i++)
	{
		arr[v[i]+4000]++;
	}

	
	// 최빈값 찾기
	for (int i = 0; i < 8001; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	for (int i = 0; i < 8001; i++)
	{
		if (arr[i] == max)
		{
			maxnum.push_back(i);
		}
	}

	if (maxnum.size() > 1)
	{
		result = maxnum[1];
	}

	else
	{
		result = maxnum[0];
	}

	result = result - 4000;

	

	int range = v[N-1] - v[0];



	cout << sansul << "\n" << mid << "\n" << result << "\n" << range;

}