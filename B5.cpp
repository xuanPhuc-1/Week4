#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	int f[a];
	for (int i = 0;i < a;i++) 
	cin >> f[i];
	for (int i = 0;i < a - 2;i++) {
	 for (int j = i + 1;j < a - 1;j++) {
	  if (f[i] + f[j] == 0) 
	  cout << f[i] << "  " << f[j] << endl;
	}
	}
	return 0;  
} 