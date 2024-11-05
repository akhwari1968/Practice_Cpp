#include <iostream>
using namespace std;
int main()
{
  int a = 0,b = 0,i = 0;
  cin >> a >> b;

  for (a;a <= b;a++)
  {
    if (a % 3 == 0)
    {
      i++;
    }
  }
  cout << i;
  return 0;
}