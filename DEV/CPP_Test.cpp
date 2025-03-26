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

	
	ll sum = 0,i = 10;
	for (i,i <= 100000000;i++)
	{
		ll tmp = i,j = 0;
		while (tmp)
		{
			tmp /= 10;
			j++;
		}
		
		tmp = i;
		if (j % 2 == 0)
		{
			
		}
	}
	
	return 0;
}