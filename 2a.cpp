#include<iostream>
using namespace std;

int main (int argc, char* argv[]) {
	int a[] = {4, 5, 2, 1, 3};
	int n=2;
	bool b=false;
	for(int i=0;i<sizeof(a) / sizeof(a[0]);i++)
	{
		if(a[i] == n)
	{
		b=true;
		break;
	}
	}
	if(b==true) cout << "Found";
	else cout << "Not Found";
	return 0;
}