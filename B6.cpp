#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	int f[a];
	for (int i = 0;i < a;i++) 
	cin >> f[i];
	for (int i = 0;i < a - 3;i++)
	 for (int j = i + 1;j < a - 2;j++)
	  for (int k = j + 1;k < a - 1;k++)
	   if (f[i] + f[j] + f[k] == 0) 
	   cout << f[i] << "  " << f[j] << "  " << f[k] << endl;
	return 0;   
}