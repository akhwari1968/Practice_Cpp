#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	//	vector<int> vec = {1,1,2,2,3,3};
	//	auto it = unique(vec.begin(),vec.end());
	//	vec.erase(it,vec.end());
	//	
	//	for(int num : vec) {
	//		cout << num << " ";
	//	}
	//	cout << endl;

	//	pair<int,double> p1(1,3.14);
	//	pair<char,string> p2('a',"hello");
	//	
	//	cout << p1.first << ' ' << p1.second << endl;
	//	cout << p2.first << ' ' << p2.second << endl;

//	pair<int, int> p1(1, 2);
//	pair<int, pair<int, int> > p2(3, make_pair(4, 5));
//	pair<pair<int, int>, pair<int, int> > p3(make_pair(6, 7), make_pair(8, 9));
//
//	cout << p1.first << " " << p1.second << endl;
//	cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;;
//	cout << p3.first.first << " " << p3.first.second << " " 
//		 << p3.second.first << " " << p3.second.second << endl;

	vector<int> vvv = {2,1,3,2,4,1,5,4};
	sort(vvv.begin(),vvv.end());
	auto l = unique(vvv.begin(),vvv.end());
	vvv.erase(l,vvv.end());
	
	for(const auto& num : vvv)
	{
		cout << num << " ";
	}
	cout << '\n';
	
	vvv.insert(vvv.begin() + 2,2);
	
	for(const auto& num : vvv)
	{
		cout << num << " ";
	}
	cout << '\n';
	vvv.erase(vvv.begin() + 2);
	
	for(const auto& num : vvv)
	{
		cout << num << " ";
	}
	
	vvv.clear();
	cout << '\n';
	if(vvv.empty())
	{
		cout << "ЮЊПе";
	}
	for (const auto& num : vvv)
	{
		cout << num << ' ';
	}
	
	
	return 0;
}
