#include <iostream>
using namespace std;
int main()
{
  int T = 0,X = 0,Y = 0,sum = 0;
  cin >> T;
  while(T--)
  {
    cin >> X >> Y;
    cout << X * 10 + Y * 90 << endl;
  }
  return 0;
}