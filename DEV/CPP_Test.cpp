#include <iostream>
#include <string>

int findr(char* str, char* sub)
{
    int i = 0;
    int j = 0;
    int strLen = 0;
    int subLen = 0;
    if (str == NULL || sub == NULL) 
    {
        return -1;
    }

    while (str[strLen] != '\0') 
    {
        strLen++;
    }

    while (sub[subLen] != '\0') 
    {
        subLen++;
    }

    if (subLen > strLen) 
    {
        return -1;
    }

    for (i = strLen - subLen; i >= 0; i--) 
    {
        for (j = 0; j < subLen; j++) 
        {
            if (str[i + j] != sub[j]) 
            {
                break;
            }
        }
        if (j == subLen) 
        {
            return i;
        }
    }
    return -1;

}

using namespace std;
int main()
{
  string str;
  cin >> str;
  int y = 0,f = 0,i = 0;
  for (i = 0;i < str.length();i++)
  {
    if (str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u')
    {
      y++;
    }
    else
    {
      f++;
    }
  }
  cout << y << endl << f;
  return 0;
}