#include<iostream>
using namespace std;

int partition(int arr[], int start , int end){
    int pivot = arr[start];
    //1count no. of elements smaller than pivot
    int count = 0; 
    for(int i = start+1 ; i <= end ; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
    int pivotIndex = start + count;
    //2place pivot at its right position when array will be sorted
    swap(arr[pivotIndex] , arr[start]);

    //3sort left and right part of pivot [left < p < right]
    int i = start;
    int j = end;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}
void quickSort(int arr[] , int start , int end){
    //base case-> if array has 0 or 1 element then it is sorted
    if(start >= end){
        return;
    }
    //1 do partition and place pivot in its right place i.e [left < p < right]
    //p = pivot index
    int p = partition( arr, start , end);
    //2 sort left part
    quickSort(arr , start , p-1);
    //3 sort right part
    quickSort(arr, p+1 , end);
}


int main(){
	int a[7] = {6,3,5,2,9,8,7};
	quickSort(a , 0 , 6);
	for(int i=0 ; i<7 ; i++){
		cout<<a[i]<<" ";
	}
}