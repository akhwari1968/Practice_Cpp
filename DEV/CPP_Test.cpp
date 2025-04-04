#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
	int i = 0,j = 0;
	cin >> i;
	vector<int> v;
	
	for (int n = 0;n < i;n++)
	{
		while (cin >> j)
		{
			v.push_back(j);
			if (cin.get() == '\n')
			break;
		}
	}
	
	int num1 = 0,num2 = 0;
	sort(v.begin(),v.end());
	for (i = 1;i < v.size();i++)
	{
		if (v[i] == v[i+1])
		num1 = v[i];
		if (v[i+1] - v[i] == 2)
		num2 = v[i] + 1;
	}
	
	cout << num2 << ' ' << num1;
	
	return 0;
}