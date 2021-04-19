#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<char> v1;
	vector<char> v2;
	string A;
	string B;
	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> A;
		cin >> B;

		for (int j = 0; j < A.size(); j++)
		{
			int find = 0;
			for (int z = 0; z < B.size(); z++)
			{
				if (A[j] == B[z]) {
					find = 1;
					break;
				}
			}
			if (find == 1)
				continue;
			else {
				cout << "impossible!";
				break;
			}
			
		}
		
	}
}