#include<bits/stdc++.h>
using namespace std;

//merge function
void conquer(int arr[] , int start , int mid , int end){
    int n = (end - start + 1); // or arr.size()
    // int temp[end - start + 1];  // created temp of same size as arr
    int temp[n];

    int i = start;
    int j = mid+1;
    int k = 0;
    while( i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }
        else{
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    //if left part is still not empty
    while(i <= mid){
        temp[k] = arr[i];
        i++;
        j++;
    }
    //if right part is still not empty
    while(j <= end){
        temp[k] = arr[j];
        j++;
        k++;
    }
    // now the temp array is sorted , copy temp array into original array
    for(int i = 0, j = start ; i < n ; i++ , j++){
        arr[j] = temp[i];
    }

}


//merge sort function 
void divide( int arr[] , int start , int end){
    //base case
    if(start >= end){
        return;
    }
    int mid = start + (end-start)/2;
    //break till single element left
    divide(arr, start , mid);
    divide(arr, mid+1 , end);
    //2 merge -> 2 sorted array
    conquer(arr, start , mid , end);
}

int main(){
    int n;
	cin>>n;
	int arr[n];
	for(int i=0 ; i<n ; i++){
		cin>>arr[i];
	}
	
	// mergeSort(a , 0 , n-1 );
    divide(arr , 0 , n-1 );

	for(int i=0 ; i<n ; i++){
		cout<<arr[i]<<" ";
	}

}