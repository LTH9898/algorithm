#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;


int cache[101][101];

string W;
string S;


bool matchMemorized(int w, int s) {

	int& ret = cache[w][s];
	if (ret != -1) return ret;

	while (s < S.size() && w < W.size() &&
		(W[w] == '?' || W[w] == S[s])) {
		++w;
		++s;
	}

	if (w == W.size()) return ret = (s == S.size());

	if (W[w] == '*')
		for (int skip = 0; skip + s <= S.size(); ++skip)
			if (matchMemorized(w + 1, s + skip))
				return true;

	return ret == false;

}


int main(void)
{

	int TC;
	int n;
	cin >> TC;

	for (int i = 0; i < TC; i++)
	{

		cin >> W;
		cin >> n;
		vector<string> words;
		for (int j = 0; j < n; j++)
		{
			memset(cache, -1, sizeof(cache));
			cin >> S;

			if (matchMemorized(0, 0) == 1)
				words.push_back(S);
		}

		sort(words.begin(), words.end());
		for (int i = 0; i < words.size(); i++)
			cout << words[i] << endl;
	}

	return 0;
}