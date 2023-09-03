#include<bits/stdc++.h>
using namespace std;

// find element present in array or not also its index

bool linearSearch( int arr[] , int n , int element){
    
    for(int i = 0 ; i<n ; i++){
        if(arr[i] == element){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout<<"enter element "<<endl;

    int element;
    cin>>element;

    bool found = linearSearch(arr , n , element );

    if( found ){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No";
    }

}