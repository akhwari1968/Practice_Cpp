#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	/*int one = 0;
	int two = 0;
	int three = 0;

	cout << "������1�ģ�";
	cin >> one;
	cout << "������2�ģ�";
	cin >> two;
	cout << "������3�ģ�";
	cin >> three;

	if (one > two && one > three)
	cout << "���ص��ǣ�one" << endl;
	else if (one < two && two > three)
	cout << "���ص��ǣ�two" << endl;
	else if (one < three && two < three)
	cout << "���ص��ǣ�three" << endl;*/

	int a = 0;
	int b = 0;

	while (cin >> a >> b)
	{
		cout << (a + b) << endl;
	}

	system("pause");
	return 0;
}