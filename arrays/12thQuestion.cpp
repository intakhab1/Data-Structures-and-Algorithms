#include<bits/stdc++.h>
using namespace std;


int findUnion(int arr[] , int size){
    
    unordered_set<int> s;

    for(int i : arr1){
        s.insert(i);
    }
    for(int i : arr1){
        s.insert(i);
    }
    return s.size();

}

int main(){
    int arr1[4] = {5, 10, 15, 5};
    int arr2[3] = {10, 15 , 4};

    int ans = findUnion(arr1, arr2);
    cout<<ans;
}

