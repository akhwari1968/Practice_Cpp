#include <iostream>
using namespace std;
int main()
{
  long long a = 0;
  int hour = 0,minute = 0,sec = 0;
  cin >> a;

  a = (a - (a / 86400000 * 24 * 60 * 60 * 1000)) / 1000;

  sec = a % 60;
  minute = a / 60 % 60;
  hour = a / 60 / 60;

  printf("%02d:%02d:%02d",hour,minute,sec);

  return 0;
}