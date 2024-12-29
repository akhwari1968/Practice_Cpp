#include <iostream>
using namespace std;
int main()
{
  int t,x,y,sum;
  cin >> t;

  while (t--)
  {
    cin >> x >> y;
    if (y <= x)
    {
      sum = (x / y) + (x % y);
    }
    else
    sum = x;

    cout << sum << endl;
  }

  return 0;
}