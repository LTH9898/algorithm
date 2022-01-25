#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> v;
int M;
int target;
int lower;
int upper;
vector<int> result;


int lower_boundary(int target, int size) {
	int mid, start, end;
	start = 0;
	end = size - 1;

	while (end > start)
	{
		mid = (start + end) / 2;
		if (v[mid] >= target)
			end = mid;
		else start = mid + 1;
	}

	return end;
}

int upper_boundary(int target, int size) {
	int mid, start, end;
	start = 0;
	end = size - 1;

	while (end > start) {
		mid = (start + end) / 2;
		if (v[mid] > target)
			end = mid;
		else start = mid + 1;
	}
	return end;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	cin >> N;
	for (int i = 0; i < N; i++) {

		int num;
		cin >> num;
		v.push_back(num);
		
	}

	sort(v.begin(), v.end());

	cin >> M;

	for (int i = 0; i < M; i++) {
		int target;
		cin >> target;
		
		lower = lower_boundary(target, v.size());
		upper = upper_boundary(target, v.size());
		
		if (target == v[N - 1])
		{
			upper++;
		}


		result.push_back(upper - lower);

	}

	for (int i = 0; i < M; i++) {
		cout << result[i] << " ";
	}
	return 0;

	
}