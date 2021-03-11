#include <iostream>
using namespace std;
int main()
{
	int k,n;
	cin >> k >> n;
	int f[n];
	for (int i = 0;i < n;i++) cin >> f[i];
	if (k < f[0] || k > f[n - 1]) 
	{
		cout << "Not found";
		return 1;
	}
	else 
	{
		int a = 0,b = n - 1;
		int mark = -1;
		while (true)
		{
			
			if (mark == (a + b)/2) break;
			mark = (a + b)/2;
			if (k == f[mark]) break;
			else if (k < f[mark]) b = mark;
			else if (k > f[mark]) a = mark;
		}
		if (k == f[mark]) 
		{
			a = mark;
			b = mark;
			while (f[a - 1] == k) a--;
			while (f[b + 1] == k) b++;
			for (int i = a;i <= b;i++) cout << i << " ";
				
		}
		else cout << "Not found";
	}
	return 0;
}