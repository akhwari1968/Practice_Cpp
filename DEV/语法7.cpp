#include <iostream>
using namespace std;
int main()
{
  int N = 0,i = 0,j = 0,zero = 0;
  int arr[1000],arr2[1000];
  cin >> N;

  for (i = 0;i < N;i++)
  {
    cin >> arr[i];
    if (arr[i] != 0)
    {
      arr2[j] = arr[i];
      j++;
    }
    else
    {
      zero++;
    }
  }

  for (i = 0;i < zero;i++)
  {
    arr2[j] = 0;
    j++;
  }

  for (j = 0;j < N;j++)
  {
    cout << arr2[j] << ' ';
  }

  return 0;
}