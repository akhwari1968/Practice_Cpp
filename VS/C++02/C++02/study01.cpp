//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//#include <ctype.h>
//using namespace std;
//
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
//int main()
//{
//	/*int c = 0;
//	cin >> c;
//
//	if (c >= 90)
//	{
//		cout << "A" << endl;
//	}
//	else if (c >= 80)
//	{
//		cout << "B" << endl;
//	}
//	else if (c >= 70)
//	{
//		cout << "C" << endl;
//	}
//	else if (c >= 60)
//	{
//		cout << "D" << endl;
//	}
//	else
//	{
//		cout << "E" << endl;
//	}*/
//
//	/*int n = 0;
//	int sn = 0;
//	int tmp = 0;
//
//	cin >> n;
//
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + 2;
//		sn += tmp;
//	}
//
//	cout << sn << endl;*/
//
//	/*int a = 0;
//	int b = 0;
//	int c = 0;
//	double sum = 0;
//	int i = 0;
//
//	cin >> a;
//	cin >> b;
//	cin >> c;
//
//	for (i = 1; i <= a; i++)
//	{
//		sum += i;
//	}
//	
//	for (i = 1; i <= b; i++)
//	{
//		sum += i * i;
//	}
//
//	for (i = 1; i <= c; i++)
//	{
//		sum += 1.0 / i;
//	}
//
//	printf("%.2lf\n", sum);*/
//
//	/*int N = 0;
//	cin >> N;
//	int i = 0;
//	for (i = 2; i <= N; i++)
//	{
//		int tru = 1;
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				tru = 0;
//				break;
//			}
//		}
//		if (tru != 0)
//		{
//			cout << i << endl;
//		}
//	}*/
//
//	/*int num = 0;
//	cin >> num;
//
//	int i = 0;
//	for (i = 2; i < num; i++)
//	{
//		if (num % i == 0)
//		{
//			cout << "not prime" << endl;
//			break;
//		}
//	}
//
//	if (i == num-1)
//	{
//		cout << "prime" << endl;
//	}*/
//
//	/*string str;
//	getline(cin, str);
//
//	int len = str.length();
//
//	for (int i = len - 1; i >= 0; i--)
//	{
//		cout << str[i];
//	}
//
//	cout << endl;*/
//
//string str1;
//string str2;
//
//cin >> str1;
//cin >> str2;
//
//cout << str1 << str2 << endl;
//
//	/*string str;
//	cin >> str;
//	int len = str.length();
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//		{
//			printf("%c", str[i]);
//		}
//	}
//	cout << endl;*/
//
//int num = 0;
//cin >> num;
//
//cout << (num / 1000) << " " 
//	 << (num / 100 % 10) << " " 
//	 << (num / 10 % 10) << " " 
//	 << (num % 10) << endl;
//
//cout << endl;
//
//string str;
//getline(cin, str);
//int i = 0;
//int a = 0, b = 0, c = 0, d = 0;
//for (i = 0; i < (str.length()); i++)
//{
//	if (isalpha(str[i]))
//	{
//		a += 1;
//	}
//	else if (isdigit(str[i]))
//	{
//		b += 1;
//	}
//	else if (str[i] == ' ')
//	{
//		c += 1;
//	}
//	else
//	{
//		d += 1;
//	}
//}
//
//cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
//
//	system("pause");
//	return 0;
//}