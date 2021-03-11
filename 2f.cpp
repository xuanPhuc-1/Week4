#include<iostream>
using namespace std;

int main (int argc, char* argv[]) {
	int a[] = {6,4,7,8,1,2};
	int n=6;
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