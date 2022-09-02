#include <bits/stdc++.h>

using namespace std;
 


 
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
 
int partition(int A[], int low, int high){
    int pivot = A[low];
    int i = low + 1;
    int j = high;
 
    while (true){
        while (i <= j && A[i] <= pivot){
            i++;
        }
        while (A[j] >= pivot && j >= i){
            j--;
        }
        if (j < i){
            break;
        } else {
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[low], &A[j]);
    return j;
}
 
void QuickSort(int A[], int low, int high){
    if (low < high){
        int p = partition(A, low, high);
        QuickSort(A, low, p-1);
        QuickSort(A, p+1, high);
    }
}
 
int main() {
 

    int A[] = {30, 70, 90, 100, 60, 50, 120, 40, 110, 20, INT_MAX};
    int n = sizeof(A)/sizeof(A[0]);
    
    QuickSort(A,0,n-1);
    
    for(int x=0;x<n-1;x++)
    {
    	cout<<A[x]<<" ";
	}
 

    return 0;
}
