#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> twoSum(vector<int> &arr, int newTarget, int start){
  vector<vector<int>> res;
  if(n - start < 2){
    return res;
  }
  int i = start;
  int j = arr.size()-1;
  while( i < j ){
    if(i != start && arr[i] == arr[i-1]){
      i++;
      continue;
    }
    int sum = arr[i] + arr[j];
    if( sum == newTarget){
      res.push_back({arr[i], arr[j]});
      i++;
      j--;
    }
    else if(sum < newTarget)i++;
    else if(sum > newTarget)j--;
  }
  return res;
}

vector<vector<int>> kSumHelper(vector<int> &arr, int target, int k, int start){
  //base case
  if( k == 2 ){
    return twoSum(arr, target, start);
  }

  int n = arr.size();
  vector<vector<int>> res;
  
  if(n - start < k){
    return res;
  }
  for(int i = start ; i <= n-k ; i++){
    if(i != start && arr[i] == arr[i-1]) continue;

    int val1 = arr[i];
    int newTarget = target - val1;
    vector<vector<int>> subRes = kSumHelper( arr, newTarget , k-1, i+1);

    for(vector<int> temp : subRes){
      temp.push_back(val1);
      res.push_back(temp);
    } 
  }
  return res;

}
vector<vector<int>> kSum(vector<int> &arr, int target, int k) {
    //write your code here
    sort(arr.begin(), arr.end());
    return kSumHelper( arr, target, k, 0) // 0=starting index, k=total element
}

int main(){
    
}
