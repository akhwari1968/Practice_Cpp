#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int is_leapyear(int year)
{
	if ((year % 400 == 0 && year % 100 != 0) || year % 400)
	return 1;
	else
	return 0;
}

int is_hui(int i,int j,int k)
{
	int b = 1;
	if (i % 10 != (j / 10 % 10) || (i / 10 % 10) != j % 10)
	b = 0;
	if ((i / 100 % 10) != (k / 10 % 10) || (i / 1000 % 10) != k % 10)
	b = 0;
	return b;
}

int main()
{
	ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
	int year = 0,mon = 0,day = 0,d1 = 0,d2 = 0,sum = 0;
	int i = 0,j = 0,k = 0;
	int arr[13] = {0,31,0,31,30,31,30,31,31,30,31,30,31};
	int arr1[4];
	cin >> d1 >> d2;
	i = d1 / 10000;
	j = d1 / 100 % 100;
	k = d1 % 100;
	year = d2 / 10000;
	mon = d2 / 100 % 100;
	day = d2 % 100;
	
	for (i;i <= year;i++)
	{
		if (is_leapyear(i))
		arr[2] = 29;
		else
		arr[2] = 28;
		if (i != year)
		{
			for (j;j < 13;j++)
			{
				for (k;k <= arr[j];k++)
				{
					if (is_hui(i,j,k))
					{
						sum++;
					}
				}
				k = 1;
			}
			j = 1;
		} 
		else
		{
			for (j;j <= mon;j++)
			{
				if (j != mon)
				{
					for (k;k <= arr[j];k++)
					{
						if (is_hui(i,j,k))
						{
							sum++;
						}
					}
					k = 1;
				}
				else
				{
					for (k;k <= day;k++)
					{
						if (is_hui(i,j,k))
						{
							sum++;
						}
					}
					k = 1;
				}
			}
			j = 1;
		}
	}
	cout << sum;
	
	return 0;
}