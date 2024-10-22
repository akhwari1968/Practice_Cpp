#include <iostream>
using namespace std;
int main()
{
  long long N = 0;
  int i = 0,idex = 0;
  double r = 0.0,t = 0.0,p = 0.0; 

  cin >> N;
  for (i = 1;i <= N;i++)
  {
    cin >> t >> p;
    if (i == 1)
    {
      r = p / t;
      idex = 1;
    }
    if (r > p / t)
    {
      r = p / t;
      idex = i;
    }
  }

  cout << idex;

  return 0;
}