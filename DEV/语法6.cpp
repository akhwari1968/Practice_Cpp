#include <iostream>
#include <string>
using namespace std;
int main()
{
  int T = 0,i = 0;
  string str;

  cin >> T;
  while (T--)
  {
    cin >> str;
    for (i = 0;i < str.length();i++)
    {
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
      {
        str[i] = toupper(str[i]);
      }
      else
      {
        str[i] = tolower(str[i]);
      }
    }
    cout << str << endl;
  }
  return 0;
}