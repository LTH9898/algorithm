#include <iostream>
#include <string>


using namespace std;

string quad_reverse(string::iterator& it)
{
	
	char head = *it;
	++it;

	if (head == 'b' || head == 'w')
	{

		return string(1, head);
	}

	string one = quad_reverse(it);
	string two = quad_reverse(it);
	string three = quad_reverse(it);
	string four = quad_reverse(it);

	return string("x") + three + four + one + two;
}


int main(void)
{
	int TC;
	string Case;
	cin >> TC;
	for (int i = 0; i < TC; i++)
	{
		cin >> Case;
		string::iterator Iter = Case.begin();
		cout << quad_reverse(Iter);
	}


	return 0;

}