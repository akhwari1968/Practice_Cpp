#include <iostream>
#include <string>
using namespace std;

int main()
{
    int len1 = 0,len2 = 0,num = 0,tu = 0;
    int p1 = 1;
    string s,t;
    cin >> s >> t;

    len1 = t.size();
    len2 = s.size();

    for (int i = len1;i > 0;i--)
    {
      tu = 0;
      for (int j = 0;j < i;j++)
      {
        while(p1)
        {
          if (p1 > len2+1)
		  {
			p1 = 1;
			tu = 1;
			break;
		  }

          if (s[p1-1] == t[j])
          {
            p1++;
            num++;
            break;
          }
          p1++;
        }
        if (tu == 1 && num != i)
        {
          num = 0;
          break;
        }
      }
      if (num == i)
      {
        cout << num;
        break;
      }
    }

	return 0;
}