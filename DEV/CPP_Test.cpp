#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
	int i = 0,j = 0;
	cin >> i;
	vector<int> v;
	
	while (scanf("%d",&j) != EOF)
	{
		v.push_back(j);
	}
	cout << v[5];
	
	return 0;
}