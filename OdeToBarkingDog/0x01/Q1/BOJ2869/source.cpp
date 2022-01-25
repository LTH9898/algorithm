#include <iostream>

using namespace std;

int A, B, V;
int result = 0;
int pos = 0;


int main() {
	int type = 0;
	cin >> A >> B >> V;

	if ((V - B) % (A - B) != 0)
	{
		type = 1;
	}
	
	result = (V - B) / (A - B);

	if (type == 1)
	{
		result = result + 1;
	}

	cout << result;
}