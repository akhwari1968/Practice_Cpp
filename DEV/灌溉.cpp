#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int k = 100;
int arr[k][k];
int main()
{
	ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
	int n = 0,m = 0,t = 0,k = 0;
	cin >> n >> m >> t;
	for (int i = 0;i < t;i++)
	{
		int x,y;
		cin >> x >> y;
		arr[x][y] = 1;
	}
	
	
	
	return 0;
}