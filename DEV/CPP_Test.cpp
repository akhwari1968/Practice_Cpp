#include <iostream>
#include <string>

using namespace std;
int main()
{
  string str;
  cin >> str;
  int y = 0,f = 0,i = 0;
  for (i = 0;i < str.length();i++)
  {
    if (str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u')
    {
      y++;
    }
    else
    {
      f++;
    }
  }
  cout << y << endl << f;
  return 0;
}