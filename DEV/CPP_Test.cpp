//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//
//int main()
//{
//	ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
//	
//	vector<int> nums = {3,2,1};
//	
//	cout << "初始:";
//	for(auto num : nums)
//	{
//		cout << num << "";
//	}
//	cout << endl;
//	
////	while(next_permutation(nums.begin(),nums.end()))
////	{
////		cout << "下一序列: ";
////		for(auto num : nums)
////		{
////			cout << num << "";
////		}
////		cout << endl;
////	}
//
//	while(prev_permutation(nums.begin(),nums.end()))
//	{
//		cout << "序列为：";
//		for (auto num : nums)
//		{
//			cout << num << " ";
//		}
//		cout << endl;
//	}
//	
//	
//	return 0;
//}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[10];

int main()
{
	ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
	for (int i = 1;i <= 4;i++)
	a[i] = i;
	
	bool tag = true;
	
	while(tag)
	{
		for(int i = 1;i <= 4;i++)
		cout << a[i] << ' ';
		cout << '\n';
		tag = next_permutation(a+1,a+1+4);
	}
	
	return 0;
}
