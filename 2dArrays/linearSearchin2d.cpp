#include<bits/stdc++.h>
using namespace std;

//print largest row sum
int largestRowSum(int arr[][4] , int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int row = 0 ; row < 3 ; row++){
        int sum = 0;
        for(int col = 0 ; col < 4 ; col++){
            sum += arr[row][col];
        }
        if( sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout<<maxi<<endl;
    cout<<rowIndex;
}
//print column wise sum
int printColSum(int arr[][4] , int row, int col){
    for(int col = 0 ; col<4 ; col++){
        int sum = 0;
        for(int row = 0 ; row<3 ; row++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";

    }
}
//print row-wise sum
int printRowSum(int arr[][4] , int row, int col){
    for(int row = 0 ; row<3 ; row++){
        int sum = 0;
        for(int col = 0 ; col<4 ; col++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";

    }
}

//linear search
int isPresent(int arr[][4] ,int target, int i, int j){
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<4 ; j++){
            if(arr[i][j] == target){
                cout<<i<<j;
            }
        }
    }
}

int main(){
    int arr[3][4];
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<4 ; j++){
            cin>>arr[i][j];
        }
    }
    int target = 4;
    isPresent(arr, target, 3 , 4);
    cout<<endl;

    printRowSum(arr, 3, 4);
    cout<<endl;

    printColSum(arr, 3, 4);
    cout<<endl;
    // for(int i = 0 ; i < 3 ; i++){
    //     for(int j = 0 ; j < 4 ; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    largestRowSum(arr, 3, 4);
    cout<<endl;

}