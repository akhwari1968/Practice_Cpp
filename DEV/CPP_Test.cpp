#include <iostream>
using namespace std;
int main()
{
  int T = 0,N = 0;
  cin >> T;
  for (T;T > 0;T--)
  {
    cin >> N;
    if (N % 3 == 0)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
  }
  return 0;
}