#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int C;
int N;


vector<int> h;

int solve(int left, int right)
{

	// 3cases 
	// CASE 1 : left == right
	if (left == right)
		return h[left];
	// CASE 2 : find max ret on left side or right side

	int mid = (left + right) / 2;

	int ret = max(solve(left, mid), solve(mid + 1, right));

	// CASE 3 : find max ret on both side (IDEA : MAX ret must include mid & mid + 1 ret )

	int lower = mid;
	int higher = mid + 1;

	int height = min(h[lower], h[higher]);

	ret = max(ret, height * 2);

	while (left < lower || higher < right)
	{
		if (higher < right && (lower == left || h[lower - 1] < h[higher + 1]))
		{
			++higher;
			height = min(height, h[higher]);
		}

		else
		{
			--lower;
			height = min(height, h[lower]);
		}

		ret = max(ret, height * (higher - lower + 1));
	}

	return ret;
}

int main(void)
{
	int temp;
	cin >> C;

	for (int i = 0; i < C; i++)
	{
		cin >> N;
		for (int j = 0; j < N; j++)
		{
			cin >> temp;
			h.push_back(temp);
		}

		cout << solve(0, N-1);
		h.clear();
	}

	return 0;
}