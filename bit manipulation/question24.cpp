// CPP program to find numbers less than N
// that have same Number Of Set Bits As N
#include <iostream>
using namespace std;

  long ncr(long n, long r) {

    if (n < r) {
      return 0L;
    }
    long res = 1L;

    for (long i = 0L; i < r; i++) {
      res = res * (n - i);
      res = res / (i + 1);
    }
    return res;
  }

  long solution(long n, int k, int i) {

    if (i == 0) {
      return 0;
    }
    long mask = 1L << i;
    long res = 0;

    if ((n & mask) == 0) {
      res = solution(n, k, i - 1);
    }
    else {
      long res1 = solution(n, k - 1, i - 1);
      long res0 = ncr(i, k);
      res = res1 + res0;
    }
    return res;
  }

  int csb(long n) {
    int res = 0;

    while (n > 0) {
      long rsb = n & -n;
      n -= rsb;
      res++;
    }
  }

  // Driver Code
int main(){

	long n  = 0000000000000000000000000000000000000000000000000000000000000101;
  	int setBits = csb(n);
	cout << solution(n, setBits, 63);
	return 0;
}

/*
int nCr( int n , int r){

    if( n < r ){ // base case
        return 0;
    }

    int res = 1;

    for(int i = 0 ; i < r ; i++){
        res = res * ( n - i);
        res = res / (i + 1);
    }
    
    return res; 
}

int csb(int n){

  int count = 0;
  while( n ){
    int rsbm = n & (-n);
    n = n-rsbm;
    count++;
  }
  return count;
  
}
int smallerNumsWithSameSetBits(int n , int setBits , int i){

    if( i == 0 ){ // base case
        return 0;
    }
	int mask = 1 << i;
    int res = 0;
    if(n & mask == 0){
        res = smallerNumsWithSameSetBits(n, setBits, i - 1);
    }
    else{
        int res1 = smallerNumsWithSameSetBits(n, setBits - 1, i - 1);
        int res0 = nCr( i , setBits);
        res = res1 + res0;
    }
    
}
*/

