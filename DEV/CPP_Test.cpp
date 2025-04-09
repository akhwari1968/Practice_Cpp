#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int d = 100005;

int main()
{
	ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
	vector<int> v1;
	vector<int> v2;
	int n = 0,k = 0,sum = 0,maxv = 0;
	cin >> n >> k;
	
	int i = 0;
	for (i = 0;i < n;i++)
	{
		int a = 0,b = 0;
		cin >> a >> b;
		v1.push_back(a);
		v2.push_back(b);
	}
	
	int left = 0,right = d;
	while(left < right)
	{
		sum = 0;
		int mid = (left + (right-left)) / 2;
		for (i = 0;i < n;i++)
		{
			sum += (v1[i]/mid)*(v2[i]/mid);
		}
		if (sum >= k)
		{
			maxv = mid;
			left = mid + 1;
		}
		else
		right = mid;
	}
	
	cout << maxv;
	
	return 0;
}