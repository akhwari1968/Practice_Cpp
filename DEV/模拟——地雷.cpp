#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int k = 150;
int arr[k][k],arr1[k][k];


int main()
{
	ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
	int n = 0,m = 0;
	
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		for (int j = 1;j <= m;j++)
		{
			cin >> arr[i][j];
		}
	}
	
	for (int i = 1;i <= n;i++)
	{
		for (int j = 1;j <= m;j++)
		{
			if (arr[i][j] == 1)
			{
				arr1[i][j] = 9;
				continue;
			}
			for (int _i = max(1,i-1);_i <= min(n,i+1);_i++)
			{
				for (int _j = max(1,j-1);_j <= min(m,j+1);_j++)
				{
					if(arr[_i][_j])arr1[i][j]++;
				}
			}
		}
	}
	
	for (int i = 1;i <= n;i++)
	{
		for (int j = 1;j <= m;j++)
		{
			cout << arr1[i][j];
			cout << ' ';
		}
		cout << "\n";
	}
	
	return 0;
}