#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
	ll i = 0,n = 0,a = 0,b = 0,c = 0,sum = 0;
	
	cin >> n;
	cin >> a >> b >> c;
	
	for (i = 1;i <= n;i++)
	{
		if ((i % a != 0) && (i % b != 0) && (i % c != 0))
		{
			sum++;
		}
	}
	
	cout << sum;
		
	return 0;
}