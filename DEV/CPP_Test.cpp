#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
int main()
{
	int num = 0;
  string str1,str2;
  cin >> str1 >> str2;

  for (int i = 0;i < str2.size();i++)
  {
    if (isdigit(str2[i]))
    {
      num = str2[i] - '0';
      str2[i] = str1[num];
    }
  }

  cout << str2;

  return 0;
}