#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int main() {
	int matchpoint = 0;
	int N;
	int alphamap[30];
	string A;
	string B;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		matchpoint = 0;
		memset(alphamap, 0, sizeof(alphamap));
		A = "";
		B = "";
		cin >> A;
		cin >> B;

		if (A.length()!= B.length())
		{
			
			cout << "Impossible!" << '\n';
			continue;
		}

		for (int i = 0; i < A.length(); i++)
		{
			int temp = A[i] - 'a';
			alphamap[temp]++;
		}

		for (int i = 0; i < B.length(); i++)
		{
			int temp = B[i] - 'a';
			if (alphamap[temp] == 0)
			{
				alphamap[temp]++;
				break;
			}
			else
			{
				alphamap[temp]++;
			}
		}

		
		for (int i = 0; i < 30; i++)
		{
			if (alphamap[i] % 2 != 0)
			{
				matchpoint = 1;
				break;
			}
		}

		if (matchpoint == 1)
		{
			cout << "Impossible!" << '\n';
		}
		else if (matchpoint == 0)
		{
			cout << "Possible!" << '\n';
		}
	
	}
	
	return 0;
}