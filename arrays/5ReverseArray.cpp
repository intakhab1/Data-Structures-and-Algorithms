#include<bits/stdc++.h>
using namespace std;

int reverse(int arr[] , int size){
    int start = 0;
    int end = size-1;

    while( start <= end ){
        int temp = arr[start]; //USE char temp -> to reverse string
        arr[start] = arr[end];
        arr[end] = temp;


        //OR

        // swap(arr[start] , arr[end]);
        start++;
        end--;
        
    }
}
int main(){
    int arr[5] = {3,2,6,1,8};
    
    reverse(arr , 5);
    
    for(int i = 0 ; i<5; i++){
        cout<<arr[i]<<" ";
    }

}