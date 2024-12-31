#include <iostream>
using namespace std;
int main()
{
  int day = 2025;
  while (day++)
  {
    if ((day % 4 == 0 && day % 100 != 0) || day % 400 == 0)
    {
      cout << day;
      break;
    }
  }
  return 0;
}