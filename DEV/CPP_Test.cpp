#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int n = 0,tmp = 0;
  double sum = 0,a = 2,b = 3;

  cin >> n;
  while (n--)
  {
    sum += a / b;
    tmp = a;
    a = b;
    b = tmp + a;
  }

  //printf("%.5lf",sum);
  cout << fixed << setprecision(5) << sum;

  return 0;
}