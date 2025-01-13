#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	/*string str1 = "hello";
	getline(cin,str1);
	
	/*string str2 = str1;
	string str3 = str2.substr(0,4);
	const char* chararr = "hello";
	string str4(chararr);
	string str5(5,'W');
	
	cout << str1 << ' ' << str2 << ' ' << str3 << ' ' << str4 << ' ' << str5 << ' ' << chararr;*/
	//cout << str1;
	
	/*char arr[100];
	scanf("%s",arr);
	string str(arr);
	printf("str = %s\n",str.c_str());*/
	
	string str1 = "hello,world!";
	/*string str2 = "hahahah";
	string str3 = str1 + ',' + str2;
	cout << str3;
	
	int a = str1.find(" ");
	cout << a;
	str1.replace(7,5,"wuyicong");
	cout << "\n" << str1;*/
	
	/*string t = str1.substr(7,5);
	cout << t << "\n";
	string a = "aaa";
	string b = "bbb";
	if (a < b)
	cout <<1;
	else
	cout << 2;*/
	for (auto &i : str1)
	{
		cout << i;
		i = '1';
	}
	cout << "\n" << str1;
	
	return 0;
}