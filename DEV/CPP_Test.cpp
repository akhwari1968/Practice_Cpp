/*#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int n = 5e5 + 3;
int a[n];

int main()
{
	
	
	int v;cin >> v;
	for (int i = 1;i <= v;i++)cin >> a[i];
	
	sort(a+1,a+1+v);
	
	for (int i = 1;i <= v;i++)cout << a[i] << " \n"[i == v];
	
	sort(a+1,a+1+v,[](const int &u,const int &v)
	{
		return u < v;
	});
	
	for (int i = v;i >= 1;i--)cout << a[i] << " \n"[i == 1];
	
	return 0;
}*/


//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//
//const int N = 1e4 + 9;
//int a[N];
//
//int main()
//{
//	//ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0)
//	ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
//	
//	int n;cin >> n;
//	
//	for(int i = 1;i <= n;i++)cin >> a[i];
//	cout << *max_element(a+1,a+1+n) << '\n';
//	cout << *min_element(a+1,a+1+n) << '\n';
//	
//	ll sum = 0;
//	for(int i = 1;i <= n;i++)sum += a[i];
//	
//	cout << fixed << setprecision(2) << 1.0 * sum / 2;
//	
//	return 0;
//}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
	int data[200];
	for (int i = 0;i < 200;i++)data[i] = 4 * i + 6;
	
	int a;cin >> a;
	cout << (lower_bound(data,data + 200,a) - data) << '\n';
	
	return 0;
}
