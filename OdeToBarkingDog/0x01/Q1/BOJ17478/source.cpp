#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int k;
string str;

void func(int k)
{
	int t = k - 1;
	if (k == 0)
	{
		cout << str << "\"����Լ��� ������?\"" << "\n";
		cout << str << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << "\n";
		while (str.length() > 0)
		{
			cout << str << "��� �亯�Ͽ���." << "\n";
			str.erase(0,4);
		}
		cout << "��� �亯�Ͽ���.";
		return;
	}

	cout << str;
	cout << "\"����Լ��� ������?\"" << "\n";
	cout << str << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << "\n"
		<< str << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << "\n"
		<< str << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << "\n";	
	str.insert(0, "____");
	
	func(t);
}

int main() {

	cin >> k;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << "\n";
	
	func(k);


}