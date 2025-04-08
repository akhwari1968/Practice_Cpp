
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//
//int main()
//{
//  ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
//
//  int n = 0,k = 0,max = 0,sum = 0;
//  vector <int> v1;
//  vector <int> v2;
//  vector <int> v3;
//	cin >> n >> k;
//  for (int i = 1;i <= n;i++)
//  {
//    int j = 0,l = 0;
//    cin >> j >> l;
//    v1.push_back(j);
//    v2.push_back(l);
//    v3.push_back(i);
//	}
//	int len = v1.size();
//  
//  int left = 0,right = n-1;
//  while(left < right)
//  {
//	int mid = (left + right) / 2;
//
//	for (int i = 0;i < len;i++)
//	{
//		if (v1[i] >= v2[i])
//		{
//			sum += v1[i] / mid;
//		}
//		else
//		{
//			sum += v2[i] / mid;
//		}
//	}
//	if (sum >= k)
//	{
//		max = mid;
//		left = mid +1;
//	}
//	else
//	right = mid -1;
//	sum = 0;
//	}
//	
//  
//  cout << max;
//  
//  return 0;
//}