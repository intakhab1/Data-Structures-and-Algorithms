#include<iostream>
using namespace std;
// do not update values of arrays as they updating in original array not in copy 
// whereas in variable updation of values in other function does'nt affect original value in main

void update(int arr[] , int size){ // int arr[] stores the array starting/base address and hence it is updating in original array and not in copy
    arr[0] = 10;
    
    for(int i = 0 ; i< size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main(){

    int arr[3] = {1 , 2, 3};

    update(arr , 3);
    for(int i = 0 ; i<3 ; i++){
        cout<<arr[i]<<" ";
    }

}