#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n,count;
  string str;
  cin >> n;
  while (n--)
  {
    cin >> str;
    if (str[0] != str[1] && str[1] == str[2])
    count++;
  }

  cout << count;
  return 0;
}