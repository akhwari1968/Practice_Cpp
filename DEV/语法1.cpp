#include <iostream>
#include <string>
using namespace std;

int main()
{
	//cout << 3 << endl;
	
	string str;
	cin >> str;
	int i = 0;
	
	for (i = 0;i < str.length();i++)
  {
    if (str[i] == 'a')
    {
      str[i] = 'A';
    }
    else if (str[i] == 'e')
    {
      str[i] = 'E';
    }
    else if (str[i] == 'i')
    {
      str[i] = 'I';
    }
    else if (str[i] == 'o')
    {
      str[i] = 'O';
    }
    else if (str[i] == 'u')
    {
      str[i] = 'U';
    }
  }

  cout << str << endl;
	
	return 0;
}