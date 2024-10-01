#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

int main()
{
	/*int c = 0;
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
	}*/

	/*int n = 0;
	int sn = 0;
	int tmp = 0;

	cin >> n;

	int i = 0;
	for (i = 0; i < n; i++)
	{
		tmp = tmp * 10 + 2;
		sn += tmp;
	}

	cout << sn << endl;*/

	/*int a = 0;
	int b = 0;
	int c = 0;
	double sum = 0;
	int i = 0;

	cin >> a;
	cin >> b;
	cin >> c;

	for (i = 1; i <= a; i++)
	{
		sum += i;
	}
	
	for (i = 1; i <= b; i++)
	{
		sum += i * i;
	}

	for (i = 1; i <= c; i++)
	{
		sum += 1.0 / i;
	}

	printf("%.2lf\n", sum);*/

	/*int N = 0;
	cin >> N;
	int i = 0;
	for (i = 2; i <= N; i++)
	{
		int tru = 1;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				tru = 0;
				break;
			}
		}
		if (tru != 0)
		{
			cout << i << endl;
		}
	}*/

	/*int num = 0;
	cin >> num;

	int i = 0;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			cout << "not prime" << endl;
			break;
		}
	}

	if (i == num-1)
	{
		cout << "prime" << endl;
	}*/

student arr[2] =
{
	{"zhangsan",12,60},
	{"wu",23}
};

cout << arr[0].name << " " << arr[0].age << " " << arr[1].score << endl;

	system("pause");
	return 0;
}