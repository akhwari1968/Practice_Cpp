#include <iostream>
using namespace std;

int main()
{
  int a = -3,b = -3,c = -3,count = 0;;
  for (a = -3;a < 4;a++)
  {
    for (b = -3;b < 4;b++)
    {
      for (c = -3;c < 4;c++)
      {
        int sum1 = a * a * a + b * b * b + c * c * c;
        int sum2 = 3 * a * b * c;
        if (sum1 == sum2)
        {
          count++;
        }
      }
    }
  }

  cout << count;
  return 0;
}