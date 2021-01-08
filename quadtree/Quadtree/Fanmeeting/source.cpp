#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N;

void addTo(vector<int>& a, const vector<int>& b, int k)
{
	int length = b.size();
	a.resize(max(a.size(), b.size() + k));

	for (int i = 0; i < length; i++)
	{
		a[i + k] += b[i];
	}

}

void subFrom(vector<int>& a, const vector<int>& b)
{
	int length = b.size();
	a.resize(max(a.size(), b.size()) + 1);

	for (int i = 0; i < length; i++) {
		a[i] -= b[i];
	}


}

vector<int> karatsuba(const vector<int>& a, const vector<int>& b)
{
	int an = a.size(), bn = b.size();

	if (an < bn) 
		return karatsuba(b, a);
	if (an == 0 || bn == 0)
		return vector<int>();


	
	int half = an / 2;


	vector<int> a0(a.begin(), a.begin() + half);
	vector<int> a1(a.begin() + half, a.end());
	vector<int> b0(b.begin(), b.begin() + min<int>(b.size(), half));

	vector<int> b1(b.begin() + min<int>(b.size(), half), b.end());

	vector<int> z2 = karatsuba(a1, b1);

	vector<int> z0 = karatsuba(a0, b0);

	addTo(a0, a1, 0); 
	addTo(b0, b1, 0);

	vector<int> z1 = karatsuba(a0, b0);
	subFrom(z1, z0);
	subFrom(z1, z2);

	vector<int> ret;
	addTo(ret, z0, 0);
	addTo(ret, z1, half);
	addTo(ret, z2, half + half);
	return ret;
	
}



int solve(const string& s1, const string& s2)
{
	int n = s1.size();
	int m = s2.size();

	vector<int> A(n), B(m);

	for (int i = 0; i < n; i++)
	{
		A[i] = (s1[i] == 'M') ? 1 : 0;
	}
	for (int i = 0; i < m; i++)
	{
		B[m - i - 1] = (s2[i] == 'M') ? 1 : 0;
	}


	vector<int> C = karatsuba(A, B);
	int total = 0;
	for (int i = n - 1; i < m; i++)
	{
		if (C[i] == 0)
			total++;
	}

	return total;

}



int main(void)
{

	cin >> N;
	
	while (N--)
	{

		string member, fans;

		cin >> member >> fans;

		cout << solve(member, fans) << endl;
		
	}


}