#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	string str1;
	getline(cin,str1);

	for (int i = 0;i < str1.length() / 2;i++)
	swap(str1[i],str1[str1.length() - i - 1]);
	cout << str1 << '\n';
	
	return 0;
}
