#include <iostream>
using namespace std;

int isleapyear(int year)
{
  if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0)
  return 1;
  else
  return 0;
}

int main()
{
  int m_day [13] = {0,31,0,31,30,31,30,31,31,30,31,30,31};
  int year = 0,month = 0,day = 0,count = 0,week = 1;

  for (year = 1900;year <= 2000;year++)
  {
    if (isleapyear(year))
    m_day[2] = 29;
    else
    m_day[2] = 28;
    for (month = 1;month <= 12;month++)
    {
      for (day = 1;day <= m_day[month];day++)
      {
        if (year != 1900 && day == 1 && week == 7)
        count += 1;

        if (week < 7)
        week += 1;
        else
        week = 1;
      }
    }
  }

  cout << count;

  return 0;
}