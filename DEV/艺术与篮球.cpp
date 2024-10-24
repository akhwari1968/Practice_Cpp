#include <iostream>
using namespace std;

int isrun(int year)
{
  if (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int number(int x)
{
	int add = 0;
  if (x == 0)
  add = 13;
  else if (x == 1)
  add = 1;
  else if (x == 2)
  add = 2;
  else if (x == 3)
  add =  3;
  else if (x == 4)
  add =  5;
  else if (x == 5)
  add =  4;
  else if (x == 6)
  add =  4;
  else if (x == 7)
  add =  2;
  else if (x == 8)
  add =  2;
  else if (x == 9)
  add =  2;
  
  return add;
}

int caculation_year(int year)
{
  return number(year / 1000) + number(year / 100 % 10) + (year / 10 % 10) + number(year % 10);
}

int caculation_month(int month)
{
  if (month < 10)
  {
    return 13 + number(month);
  }
  else
  {
    return number(month / 10) + number(month % 10);
  }
}

int caculation_day(int day)
{
  if (day < 10)
  {
    return 13 + number(day);
  }
  else
  {
    return number(day / 10) + number(day % 10);
  }
}

int main()
{
  int year = 2000,month = 1,day = 1;
  int sum = 0;

  for (year = 2000;year <= 2024;year++)
  {
      for (int month = 1;month <= 12;month++)
      {
        if (month == 2)//二月处理
        {
          if (isrun(year))
          {
            for (day = 1;day < 30;day++)
            {
              if ((caculation_month(month) + caculation_month(month) + caculation_day(day)) > 50)
              {
                sum += 1;
              }
            }
          }
          else
          {
            for (day = 1;day < 29;day++)
            {
              if ((caculation_month(month) + caculation_month(month) + caculation_day(day)) > 50)
              {
                sum += 1;
              }
            }
          }
        }
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||month == 10 || month == 12)
        {
          for (day = 1;day < 32;day++)
          {
            if ((caculation_month(month) + caculation_month(month) + caculation_day(day)) > 50)
              {
                sum += 1;
              }
          }
        }
        else
        {
          for (day = 1;day < 31;day++)
          {
            if ((caculation_month(month) + caculation_month(month) + caculation_day(day)) > 50)
              {
                sum += 1;
              }
          }
        }
      }
    }
    cout << sum;

    return 0;
}
