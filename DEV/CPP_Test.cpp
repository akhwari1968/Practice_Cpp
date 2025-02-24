#include <iostream>
#include <string>
using namespace std;
int main()
{
  string str1;
  bool s = false;
  cin >> str1;
  int i = 0,j = 0;

  for (i = 0;i < str1.size();i++)
  {
    for (j = 0;j < str1.size();j++)
    {
      if (str1[i] == ' ')
      break;
      
      if (str1[j] == ' ')
      continue;
      
      if (j == i)
      continue;
      
      s = false;
      if (str1[j] == str1[i])
      {
      	str1[j] = ' ';
      	str1[i] = ' ';
        s = true;
        break;
      }
    }
    if (!s)
    break;
  }
  if (s)
  cout << "YES";
  else
  cout << "NO";
  return 0;
}