#include <iostream>
#include <stack>
#include <cstring>
#include <string>

using namespace std;

string S;
int v[51];

int recur(int start, int end)
{
	int temp = 0;
	int result = 0;

	for (int i = start; i < end; i++)
	{
		if (S[i] == '(')
		{
			temp = S[i - 1] - '0';

			result += temp * recur(i + 1, v[i]) - 1;
			i = v[i];

			continue;
		}

		result++; // 괄호를 찾은 이전/ 찾은 이후에는 하나씩 들어간다. 위 loop를 실행하지 않았을 경우
	}

	return result;

}


int main(void)
{
	stack<int> st;

	cin >> S;

	for (int i = 0; i < S.length(); i++)
	{
		if (S[i] == '(')
		{
			st.push(i);
		}

		else if (S[i] == ')')
		{
			v[st.top()] = i;

			st.pop();

		}

	}

	cout << recur(0, S.length());



}