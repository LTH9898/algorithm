#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int L;
int C;


bool isVowel[26];

char A[15];
char P[16];

void back(int pos, int prev, int consonant, int vowel)
{
	if (pos == L) {
		if (consonant >= 2 && vowel >= 1) {
			for (int i = 0; i < L; ++i)
				cout << P[i];
			cout << '\n';
			return;
		}
	}

	for (int i = prev + 1; i < C; i++) {
		char now = A[i];
		P[pos] = now;
		if (isVowel[i])
			back(pos + 1, i, consonant, vowel + 1);
		else
			back(pos + 1, i, consonant + 1, vowel);
	}
}

int main() {

	cin >> L >> C;
	for (int i = 0; i < C; ++i)
		cin >> A[i];

	sort(A, A + C);
	for (int i = 0; i < C; ++i) {
		if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u')
			isVowel[i] = true;
	}

	back(0, -1, 0, 0);

	return 0;

}