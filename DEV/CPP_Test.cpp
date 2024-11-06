#include <iostream>
using namespace std;
int main()
{
  long long t = 0,x = 0,y = 0,sum = 0;
  cin >> t;

  while(t--)
  {
    cin >> x >> y;
    sum = x - y;
    if (sum <= 0)
    {
      cout << 0 << endl;
    }
    else
    {
      cout << sum << endl;
    }

  }
  return 0;
}