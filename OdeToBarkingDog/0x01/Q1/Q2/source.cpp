#include <iostream>
#include <vector>
using namespace std;

int func2(vector<int> v, int a) {

	int b;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		v.push_back(b);
	}

	for (int i = 0; i < a; i++)
	{
		int first = v[i];
		for (int j = i + 1; j < a; j++)
		{
			int second = v[j];

			if (first + second == 100)
			{
				return 1;
			}
		}
	}

	return 0;
	

}

//Q3

int func3(int a) {
	for (int i = 0; i < a; i++)
	{
		if (i * i == a)
		{
			return 1;
		}
	}

	return 0;
}

//Q4

int func4(int x) {

	int dx = 1;
	int fresult = 0;
	for (int i = 0; i < x; i++)
	{
		dx = dx * 2;
		if (x < dx)
		{
			fresult = dx / 2;
			break;
		}
	}

	return fresult;

}


int main() {


	int N;
	int result;
	cin >> N;
	result = func4(N);

	cout << result;

	return 0;
	/*vector<int> base;
	int n;
	int result = 0;
	cin >> n;

	result = func2(base, n);

	cout << result;
	return 0;*/

	
}