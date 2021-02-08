#include <iostream>
#include <stack>
#include <vector>

using namespace std;


int main()
{

	int N;
	vector<int> v;
	stack<int> s;
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	vector<int> ans(v.size(), -1); // 정답 벡터 -1로 초기화

	for (int i = 0; i < N; i++)
	{
		while (!s.empty() && v[s.top()] < v[i])
		{
			ans[s.top()] = v[i];
			s.pop();
		}
		s.push(i);
	}

	for (int i = 0; i < N; i++)
	{
		cout << ans[i] << " ";
	}


	return 0;

}