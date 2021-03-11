#include <iostream>
#include <cstdlib>
#include <time.h> 
#include <ctime> 
using namespace std;
void initRandomArray(int *A, int n, int k) {
    srand(time(NULL));
    int randNum = 0;
    for (int i = 0; i < n; i++) {
        randNum = rand() % k;
        A[i] = randNum;
    }
}

int main (){
	clock_t start, end;
    double time_use;
	int *A, temp;
    int n = 10000; /* Số lượng phần tử của mảng */
    int k = 10000; /* Mỗi phần tử có giá trị ngẫu nhiên nằm trong khoảng từ 0 đến k */

    A = new int[n]; // Cấp phát bộ nhớ cho mảng A

    initRandomArray(A, n, k);
    for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(A[i] < A[j])
			{
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
    for (int i = 0; i < n; i++) {
        cout << A[i] <<" ";
    }
    cout << endl;
    end = clock();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    cout << endl << "Took " << time_use << " seconds" ;

    delete[]A; // Free vùng nhớ sau khi sử dụng
    return 0;
}
	
