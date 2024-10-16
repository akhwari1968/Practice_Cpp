#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <iomanip>//输入输出格式库
#include <string>
#define pi 3.1415926
//#define Swap(num1,num2) (temp = num1,num1 = num2,num2 = temp)
using namespace std;

int isprime(int m)
{
	int i = 0;
	int t = 1;
	for (i = 2; i < m; i++)
	{
		if (!(m % i))
		{
			t = 0;
			return t;
		}
	}
	return t;
}

//int temp = 0;
int main()
{
	/*int val1 = 0;
	int val2 = 0;
	cin >> val1 >> val2;
	Swap(val1, val2);
	cout << val1 << " " << val2 << endl;*/

	/*string str;
	getline(cin, str);
	int i = 0;
	for (i = 0; i < str.length(); i++)
	{
		if (isalpha(str[i]))
		{
			if (str[i] == 122)
			{
				str[i] = 'a';
			}
			else
			{
				str[i] += 1;
			}
		}
	}

	cout << str << endl;*/

	/*string str;
	getline(cin, str);
	int len = str.length();
	int i = 0;
	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	cout << endl;*/

	/*int m = 0, n = 0,sum = 0;
	cin >> m >> n;
	for (m = m; m <= n; m++)
	{
		if (isprime(m))
		{
			sum += m;
		}
	}

	cout << sum << endl;*/

	/*int arr[10];
	int i = 0;
	int sum = 0, count = 0;
	for (i = 0; i < 10; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	sum /= 10;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > sum)
		{
			count++;
		}
	}

	cout << count << endl;*/

	double r = 0.0;
	cin >> r;
	cout << fixed << setprecision(2) << pi * r * r << endl;//fixed设置为定点输出模式，setprecision设置小数点后几位

	system("pause");
	return 0;
}