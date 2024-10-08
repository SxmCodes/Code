#include <bits/stdc++.h>
using namespace std;

int reversal(int arr[], int start, int end){
	while(start>end){
		int temp = arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}

void leftRotate(int arr[], int d, int n){
	if(d==0)
		return;
	d %=n;

	reversal(arr, 0, d-1);
	reversal(arr, d, n-1);
	reversal(arr, 0, n-1);
}

void printArray(int arr[], int size){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;
    
    leftRotate(arr, d, n);
    printArray(arr, n);
	return 0;
}