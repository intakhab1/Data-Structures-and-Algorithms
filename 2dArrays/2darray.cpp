#include<iostream>
using namespace std;

int main(){

    //create 2-d array
    int arr[3][4];

    //taking input ->row wise
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<4 ; j++){
            cin>>arr[i][j];
        }
    }
    //taking input ->col wise
    // for(int i = 0 ; i < 4 ; i++){
    //     for(int j = 0 ; j < 3 ; j++){
    //         cin>>arr[j][i];
    //     }
    // }

    //print 2d array
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //taking input with elements
    int arr2[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    //also
    int arr3[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    
}