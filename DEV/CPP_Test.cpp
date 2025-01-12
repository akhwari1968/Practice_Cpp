#include <iostream>
#include <string>
using namespace std;
int main()
{
  string str1;
  bool s = false;
  cin >> str1;
  int i = 0,j = 0;

  for (i;i < str1.size();i++)
  {
    for (j = 1;j < str1.size();j++)
    {
      if (str1[j] == str1[i])
      {
        s = true;
        break;
      }
      else
      s = false;
    }
  }
  if (s)
  cout << "YES";
  else
  cout << "NO";
  return 0;
}