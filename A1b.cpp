#include<iostream>
using namespace std;

int main (int argc, char* argv[]) {
	int a[] = {1};
	int temp;
	int n = sizeof(a) / sizeof(a[0]);
	cout << "lengh = " << n << endl;
	for(int i=0; i<n;i++)
	{
		for(int j=i+1;j<n+1;j++)
		{
			if(a[i] > a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=1; i<=n;i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}