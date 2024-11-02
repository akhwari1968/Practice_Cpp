#include <iostream>
using namespace std;

int isleapyear(int year)
{
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  int days[13] = {0,31,0,31,30,31,30,31,31,30,31,30,31};
  int number[10] = {13,1,2,3,5,4,4,2,2,2};
  int year = 2000,month = 1,day = 1,num = 0,chinese = 0,math = 0;

  for (year = 2000;year <= 2024;year++)
  {
    if (isleapyear(year))
    {
      days[2] = 29;
    }
    else
    {
      days[2] = 28;
    }
    for (month = 1;month <= 12;month++)
    {
      for (day = 1;day <= days[month];day++)
      {
        math = (year * 10000) + (month * 100) + day;

        while (math)
        {
          num += number[math % 10];
          math /= 10;
          if (num > 50)
          {
            chinese++;
            break;
          }
        }
        num = 0;

        if (year == 2024 && month == 4 && day == 13)
        {
          cout << chinese;
        }
      }
    }
  }
  return 0;
}
