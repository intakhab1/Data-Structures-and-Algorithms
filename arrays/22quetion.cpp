#include<bits/stdc++.h>
using namespace std;

vector<int> rangeQuerie(vector<vector<int>>& queries , int length){
    vector<int> res;
    //loop on queries
    int n = queries.size();
    for(int i = 0 ; i < n ; i++){
        int startIndex = queries[i][0];  //start
        int endIndex = queries[i][1];    //end
        int increment = queries[i][2];   //to increment

        res[startIndex] += increment;
        
        if(endIndex + 1 < n){  // managing last index + 1 ( skip )
            res[endIndex + 1] -= increment;
        }
    }
    //prefix sum
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum+= res[i];
        res[i] = sum;
    }
    return res;
}

int main(){
    int length = 5
    queries= {
            {1,3,2},
            {2,4,3},
            {0,2,-2}
    }

}
// at start => [0, 0, 0, 0, 0]