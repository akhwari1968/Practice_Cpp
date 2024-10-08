#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#define Swap(num1,num2) (temp = num1,num1 = num2,num2 = temp)
using namespace std;

int temp = 0;
int main()
{
	int val1 = 0;
	int val2 = 0;
	cin >> val1 >> val2;
	Swap(val1, val2);
	cout << val1 << " " << val2 << endl;

	system("pause");
	return 0;
}