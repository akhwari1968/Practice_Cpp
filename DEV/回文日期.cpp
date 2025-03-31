#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int is_leapeyar()
{
	
}

int main()
{
	ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
	int year = 0,mon = 0,day = 0,d1 = 0,d2 = 0;
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
	
	
	
	
	return 0;
}