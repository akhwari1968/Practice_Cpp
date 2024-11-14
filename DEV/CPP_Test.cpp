#include <iostream>
#include <string>
using namespace std;
int main()
{
  string str;
  cin >> str;
  if (str[str.length() - 1] == '0')
  str[str.length() - 1] = '1';
  else
  str[str.length() - 1] = '0';
  cout << str;

  return 0;
}