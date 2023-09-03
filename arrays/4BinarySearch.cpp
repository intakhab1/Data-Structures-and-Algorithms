#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[] , int size , int element){
    int start = 0;
    int end = size-1;
  
    while( start <= end ){
        int mid = start+ (end-start)/2;  // or (start + end)/2;

        if(arr[mid] == element){
            return mid;  // at last only mid will return if element is presnt in array
        }
        else if(arr[mid] < element){ // go right
            start = mid+1;
        }
        else if(arr[mid] > element){ // go left
            end = mid-1;
        }
    }
    return -1;

}

int main(){
    int odd[] = { 2,2,2};
    int even[6] = {2 , 9 , 10 , 13 , 20 , 21};

    int oddindex = binarySearch( odd , 3 , 3);
    cout<<"Index of given element "<<oddindex<<endl;
    
    int index = binarySearch( even , 6 , 21);
    cout<<"Index of given element "<<index<<endl;



}