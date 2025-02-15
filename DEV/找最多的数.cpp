#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
	map<int,int> nu;
	ll n = 0,m = 0;
	int nub = 0;
	
	cin >> n >> m;
	for (ll i = 0;i < n * m;i++)
	{
		cin >> nub;
		nu[nub] ++;
	}
	
	for (const auto &[x,y] : nu)
	{
		if (2 * y > n * m / 2)
		{
			cout << x << "\n";
		}
	}
	
	return 0;
}