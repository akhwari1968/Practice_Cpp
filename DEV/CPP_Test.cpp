#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
	ll n = 0,k = 0,tmp = 0,sum = 0;
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

	ll len = arr.size();
	for (i = 0;i < len;i++)
	{
		for (j = i+1;j < len;j++)
		{
			for (t = j+1;t < len;t++)
			{
				tmp = arr[i] + arr[j] + arr[t];
				if (tmp % k == 0)
				 {
				 	sum = tmp;
				 }
				 
				 if (sum > tmp)
				 break;
			}
			if (sum > arr[i] + arr[j] + arr[j+1])
			break;
		}
		if (sum > arr[i] + arr[i+1] + arr[i+2])
		break;
	}
	
	cout << sum;
	
	return 0;
}