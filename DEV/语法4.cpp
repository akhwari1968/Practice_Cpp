#include <iostream>
#include <string>
using namespace std;
int main()
{
  int i = 0,t = 0,N = 0,X = 0;
  string str1 = "YES";
  string str2 = "NO";

  cin >> t;
  while (1)
  {
    for (i = 0;i < t;i++)
    {
      cin >> N >> X;
      if (X >= (N / 2.0))
      {
        cout << str1 << endl;
      }
      else
      {
        cout << str2 << endl;
      }
    }
    break;
  }
  
  return 0;
}