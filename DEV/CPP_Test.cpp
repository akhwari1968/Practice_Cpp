#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i = 0;
  string str1;
  cin >> str1;

  sort(str1.begin(),str1.end());

  while(i < (int)str1.size())
  {
    if (str1[i] == str1[i+1])
    {
      i += 2;
    }
    else
    break;
  }
  if(i < str1.size())
  cout << "NO";
  else
  cout << "YES";

  return 0;
}