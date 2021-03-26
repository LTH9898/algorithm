#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a = 0;
int b = 0;
int N;
int M;

vector<int> v1;
vector<int> v2;

int BSearch(int target) {

	int start = 0;
	int end = N - 1;

	int mid;

	while (1)
	{

		mid = (start + end) / 2;
		if (v1[mid] == target)
		{
			
			return 1;
		}
		if (start >= end - 1)
		{
			if (v1[end] == target)
			{
				return 1;
			}
			else {
				return 0;
			}
		}
		if (target > v1[mid])
		{
			start = mid;
		}
		else
		{
			end = mid;
		}
		
	}


}


int main() {

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> a;
		v1.push_back(a);
	}

	sort(v1.begin(), v1.end());

	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> b;
		v2.push_back(b);
	}

	int result = 0;

	for (int i = 0; i < M; i++)
	{
		result = BSearch(v2[i]);
		cout << result << "\n";
	}

	return 0;


	
	
}