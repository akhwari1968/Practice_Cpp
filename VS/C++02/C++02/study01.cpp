#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	int c = 0;
	cin >> c;

	if (c >= 90)
	{
		cout << "A" << endl;
	}
	else if (c >= 80)
	{
		cout << "B" << endl;
	}
	else if (c >= 70)
	{
		cout << "C" << endl;
	}
	else if (c >= 60)
	{
		cout << "D" << endl;
	}
	else
	{
		cout << "E" << endl;
	}
	system("pause");
	return 0;
}