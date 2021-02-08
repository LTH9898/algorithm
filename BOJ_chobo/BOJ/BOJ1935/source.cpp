#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

double cal(double a, double b, char op)
{
	double res = 0;
	switch (op)
	{
	case '+':
		res = b + a;
		break;
	case '-':
		res = b - a;
		break;
	case '*':
		res = b * a;
		break;
	case '/':
		res = b / a;
		break;
	}
	return res;
}

int main(void)
{

	cin.sync_with_stdio(false);	
	cin.tie(nullptr);


	int N;
	string str;
	stack<double> s;
	vector<double> v;
	// ���� �����Է�
	cin >> N;
	// ���� ǥ��� �Է�
	cin >> str;
	// �� ������ �� �̸� �����س��� ex) v[0] = A, v[1] = B, ...
	for (int i = 0; i < N; i++)
	{
		int temp = 0;
		cin >> temp;
		v.push_back(temp);
	}

	int k = 0;
	for (int i = 0; i < str.length(); i++)
	{
		
		double a1;
		double a2;
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
		{
			a1 = s.top();
			s.pop();
			a2 = s.top();
			s.pop();
			s.push(cal(a1, a2, str[i]));
		}

		else
		{
			s.push(v[str[i]-'A']);
		}

	}
	
	cout << fixed;
	cout.precision(2);
	cout << s.top();
	


}