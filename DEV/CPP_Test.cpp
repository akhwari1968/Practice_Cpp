#include <iostream>
using namespace std;
int main()
{
  int n = 0,i = 1,ok = 0;
  int arr[200001];

  cin >> n;
  if (n == 1)
  {
    return ok;
  }
  while (i <= n)
  {
    cin >> arr[i++];
  }

  i = 0;
  int tmp = 0;
  int k = 0;
  while (i < n)
  {
    i += 2;
    if (i == 2)
    {
      tmp = n - 1;
      for (k = tmp;k > 0;k--)
      {
        
      }
      k = n - 1;
    }
    else
    {
      tmp -= 2;
      for (k = tmp;k > 0;k--)
      {
        
      }
    }
  }

  return 0;
}