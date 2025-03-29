#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
	ll n = 0,k = 0,tmp = 0;
	ll i = 0,j = 0,t = 0;
	vector<int> arr;
	cin >> n >> k;
	for (i = 0;i < n;i++)
	{
		cin >> tmp;
		arr.push_back(tmp);
	}
	sort(arr.begin(),arr.end(),[](int a,int b)
	{
		return a > b;
	});
	
	for (i;i < arr.size();i++)
	{
		for (j = i+1;j < arr.size();j++)
		{
			for (t = j+1;t < arr.size();t++)
			{
				
			}
		}
	}
	
	
	return 0;
}