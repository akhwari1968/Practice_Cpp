#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
//	int sum = 0;
//	for (int i = 1;i < 50;i++)
//	{
//		sum += i;
//	}
//	cout << sum;

//	int sum = 0;
//	for (int i = 1;i <= 2020;i++)
//	{
//		int tmp = i;
//		while (tmp)
//		{
//			if (tmp % 10 == 2)
//			{
//				sum++;
//			}
//			tmp /= 10;
//		}
//	}
//	
//	cout << sum;

	
	/*ll sum1 = 0,sum2 = 0,i = 10,sum = 0;
	for (i;i <= 100000000;i++)
	{
		ll tmp = i,j = 0,k = 0;
		while (tmp)
		{
			tmp /= 10;
			j++;
		}
		
		tmp = i;
		if (j % 2 == 0)
		{
			for (k = 0;k < (j / 2);k++)
			{
				sum1 = sum1 + (tmp % 10);
				tmp /= 10;
			}
			for (k = 0;k < (j / 2);k++)
			{
				sum2 = sum2 + (tmp % 10);
				tmp /= 10;
			}
			if (sum1 == sum2)
			sum++;
		}
		
		sum1 = 0;
		sum2 = 0;
	}
	
	cout << sum;*/
	
	/*cout << 2*pow(9,3)+0*pow(9,2)+2*pow(9,1)+2*pow(9,0) << endl;*/
	
	/*int i = 1,sum = 1;
	
	for (i;sum <= 23;i++)
	{
		int tmp = i,j = 0;
		while (tmp)
		{
			if (tmp&1 == 1)
			{
				j++;
			}
			tmp = tmp >> 1;
		}
		if (j == 3)
		{
			sum++;
		}
	}
	cout << i-1;*/
	
	/*int n = 0,x = 2024;
	
	while(x)
	{
		if (x&1 == 1)
		{
			n++;
		}
		x = x >> 1;
	}
	
	cout << n;*/
	
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