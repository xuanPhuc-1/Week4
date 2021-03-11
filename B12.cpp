#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a;
	cin >> a;
	int f[a + 1];
	for (int i = 1;i <= a;i++) f[i] = 0;
	f[1] = 1;
	for (int i = 2;i <= a;i++)
	 for (int j = 2;j <= sqrt(i);j++)
	  if (i%j == 0)
	   {
	   		f[i] = 1;
	   		break;
	   }
	for (int i = 1;i <= a;i++)   
	 if (f[i] == 0) 
	 cout << i << " ";
	return 0;
}