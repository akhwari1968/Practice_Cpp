#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int nums(int j)
{
	int sum = 0;
	while(j)
	{
		sum += j % 10;
		j /= 10;
	}
	
	return sum;
}

int main()
{
	ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
	multimap<int,int> mmap;
	int n = 0,m = 0;
	cin >> n >> m;
	
	for (int i = 1;i <= n;i++)
	{
		int sum = nums(i);
		mmap.insert(make_pair(sum,i));
	}
	sort(v.begin(),)
	int count = 0;
	for (auto it = mmap.begin();it != mmap.end();it++)
	{
		count++;
		if (count == m)
		{
			cout <<  it->second;
		}
	}
	
	return 0;
}