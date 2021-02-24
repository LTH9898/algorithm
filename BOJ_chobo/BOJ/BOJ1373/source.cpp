// 진법 변환 문제의 경우 다음 알고리즘.
// 2진법에서 2자리씩 묶으면 4진수 / 3자리씩 묶으면 8진수. ...
#include <iostream>
#include <string>
#include <math.h>
#include <stack>
#include <vector>
using namespace std;

//int main()
//{
//	vector<int> v;
//	stack<int> s;
//	long long result = 0;
//	string arr;
//
//	cin >> arr;
//	int len = arr.length();
//	int temp = len - 1;
//
//	for (int i = 0; i < len; i++)
//	{
//		long long a = arr[i] - '0';
//		result += (a)* (pow(2, temp));
//		temp--;
//	}
//
//	while (1)
//	{
//		s.push(result % 8);
//
//		result = result / 8;
//
//		if (result == 0)
//			break;
//
//	}
//
//	int z = s.size();
//	for (int i = 0; i < z; i++)
//	{
//		v.push_back(s.top());
//		s.pop();
//	}
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i];
//	}
//
//}

int main()
{

	string arr;

	cin >> arr;

	while (arr.size() % 3 != 0) {
		arr = '0' + arr;
	}

	string result;
	for (int i = 0; i < arr.size(); i += 3)
	{
		int tmp = 0;
		for (int j = i; j < i + 3; j++) {
			tmp += (arr[j] - '0') * pow(2, 2 - (j % 3));
		}
		result += to_string(tmp);
	}
	for (int i = 0; i < result.size(); i++) {
		cout << result[i];
	}
		
	return 0;
}