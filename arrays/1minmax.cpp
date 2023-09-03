#include<bits/stdc++.h>
using namespace std;


int getMax( int arr[] , int size ){

    int maximum = INT_MIN;

    for(int i = 0 ; i< size ; i++){

        // maximum = max( maximum , arr[i]);

        //OR
        
        if(arr[i] > maximum){
            maximum = arr[i];
        }
    }
    return maximum;

}
int getMin( int arr[] , int size){

    int min  = INT_MAX;

    for( int i = 0 ; i<size ; i++){
        if( arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int difference(int arr[] , int size){
    int max = getMax(arr , size);
    int min  = getMin(arr , size);
    int ans = max - min;
    return ans;
}

int main(){
    int n;
    cin>>n;

    int arr[100];
    //taking input in array
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"max = "<<getMax( arr , n)<<endl;
    cout<<"min = "<<getMin( arr , n)<<endl;
    cout<<"difference = "<<difference(arr, n)<<endl;
    
}