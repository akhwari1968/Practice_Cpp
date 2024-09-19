#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	/*int one = 0;
	int two = 0;
	int three = 0;

	cout << "请输入1的：";
	cin >> one;
	cout << "请输入2的：";
	cin >> two;
	cout << "请输入3的：";
	cin >> three;

	if (one > two && one > three)
	cout << "最重的是：one" << endl;
	else if (one < two && two > three)
	cout << "最重的是：two" << endl;
	else if (one < three && two < three)
	cout << "最重的是：three" << endl;*/

	int a = 0;
	int b = 0;

	while (cin >> a >> b)
	{
		cout << (a + b) << endl;
	}

	system("pause");
	return 0;
}