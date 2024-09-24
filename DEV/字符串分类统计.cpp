#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin,str);
	
	int i = 0;
	int y = 0;
	int s = 0;
	int k = 0;
	int q = 0;
	int len = str.length();
	for (i = 0;i < len;i++)
	{
		if (isalpha(str[i]))
		{
			y++;
		}
		else if (str[i] == ' ')
		{
			k++;
		}
		else if (isdigit(str[i]))
		{
			s++;
		}
		else
		{
			q++;
		}
	}
	
	cout << y << " " << s << " " << k << " " << q << endl;
	
	system("pause");
	return 0;
}