#include <iostream>
#include <math.h>
#include <vector>
#include <string>

using namespace std;

typedef struct {
	string number;
	int strikeNum;
	int ballNum;
} Info;


Info info;
vector<Info> vec;
int N = 0;

bool judge(string target) {
	int strikeNum, ballNum;
	for (int i = 0; i < N; i++)
	{
		strikeNum = 0;
		ballNum = 0;

		for (int a = 0; a < 3; a++) {
			for (int b = 0; b < 3; b++) {
				if (a == b && vec[i].number[a] == target[b])
				{
					strikeNum++;
				}
				if (a != b && vec[i].number[a] == target[b])
				{
					ballNum++;
				}
			}
		}

		if (strikeNum != vec[i].strikeNum || ballNum != vec[i].ballNum)
			return false;

	}
	return true;
}

int main() {

	cin >> N;
	int result = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> info.number >> info.strikeNum >> info.ballNum;
		vec.push_back(info);

	}

	string target;
	for (int i = 123; i < 1000; i++) {
		target = to_string(i);

		if (target[0] == target[1] || target[1] == target[2] || target[0] == target[2])
			continue;
		if (target[0] - '0' == 0 || target[1] - '0' == 0 || target[2] - '0' == 0)
			continue;

		if (judge(target))
			result++;
	}

	cout << result;

	return 0;
}