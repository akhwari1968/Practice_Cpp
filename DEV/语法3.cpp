#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N = 0,sum = 0,i = 0;
	int arr[100];
	cin >> N;
	for (i = 0;i < N;i++)
	{
	cin >> arr[i];
	sum += arr[i];
	}
	cout << sum;
	
	return 0;
}