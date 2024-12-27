#include <iostream>
using namespace std;
int main()
{
  int t;
  long long x,y;

  cin >> t;
  while (t--)
  {
    cin >> x >> y;
    if (x > y)
    cout << "BRIDGE" << endl;
    if (x < y)
    cout << "YI" << endl;
    if (x == y)
    cout << "ANY" << endl;
  }

  return 0;
}