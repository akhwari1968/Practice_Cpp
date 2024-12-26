#include <iostream>
using namespace std;
int main()
{
  int n,d,t,sum;
  int i = 0,j = 0;

  cin >> n >> d;
  while (n--)
  {
    cin >> t;
    if (t >= 80 || t <= 9)
    {
      //危险
      i++;
    }
    else
    {
      //不危险
      j++;
    }
  }

  sum = (i / d) + (j / d);
  if (i - i / d != 0)
  sum += 1;
  if (j - j / d != 0)
  sum += 1;
  
  cout << sum;

  return 0;
}