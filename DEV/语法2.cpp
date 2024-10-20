#include <iostream>
using namespace std;
int main()
{
  int week = 6,run = 0,i = 0,count = 0;
  int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

  for (i = 0;i < 12;i++)
  {
    int j = 1;
    for (j = 1;j <= arr[i];j++)
    {
      if (week > 7)
      {
        week = 1;
      }

      if (week == 6)
      {
        count++;
      }
      else if (week == 7)
      {
        count++;
      }
      if (j == 1 && week != 6 && week != 7)
      {
        count++;
      }
      if (j == 11 && week != 6 && week != 7)
      {
        count++;
      }
      if (j == 21 && week != 6 && week != 7)
      {
        count++;
      }
      if (j == 31 && week != 6 && week != 7)
      {
        count++;
      }

      week++;
    }
  }

  cout << count;

  return 0;
}