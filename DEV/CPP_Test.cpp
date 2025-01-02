#include <iostream>
#include <string>
using namespace std;

int main()
{
    int len1 = 0,len2 = 0,num = 0;
    int p1 = 1;
    string s,t;
    cin >> s >> t;

    len1 = t.size();
    len2 = s.size();

    for (int i = len1;i > 0;i--)
    {
      for (int j = 0;j < i;j++)
      {
        while(p1)
        {
          if (s[p1-1] == t[j])
          {
            p1++;
            num++;
            break;
          }
          
          if (p1 > len2)
          {
          	p1 = 1;
          	break;
		  }
          p1++;
        }
      }
      if (num == i)
      {
        cout << num;
        break;
      }
      else
      {
        num = 0;
      }
    }
    
	
	
	return 0;
}