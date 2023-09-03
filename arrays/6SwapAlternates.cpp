#include<bits/stdc++.h>
using namespace std;


void swap(int arr[] , int size){
    
    for(int i = 0 ; i<size ; i+=2){
        if( i+1 < size ){

            // swap(arr[i] , arr[i+1]);
            
            //OR

            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

}

int main(){
    int arr[5] = {3,2,6,1,8};
    
    swap(arr , 5);
    
    for(int i = 0 ; i<5; i++){
        cout<<arr[i]<<" ";
    }
}