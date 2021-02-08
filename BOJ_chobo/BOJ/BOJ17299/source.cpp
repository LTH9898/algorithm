#include <iostream>
#include <vector>
#include <stack>
#include <cstring>
using namespace std;

int N;
vector<int> v;
stack<int> s;

int main()
{
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	int cnt[1000001];//각 숫자의 등장횟수
	memset(cnt, 0, sizeof(cnt));
	//vector<int> ans(sizeof(v), -1); //각 벡터의 결과
	int ans[1000001];
	memset(ans, -1, sizeof(ans));

	for (int i = 0; i < N; i++)
	{
		cnt[v[i]]++;
	}

	for (int i = 0; i < N; i++)
	{
		while (!s.empty() && cnt[v[s.top()]] < cnt[v[i]])
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