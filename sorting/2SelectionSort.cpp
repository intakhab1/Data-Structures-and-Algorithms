#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
    //selection sort algo
	for(int i = 0; i < n-1 ;i++){
        //set min to 1st index
		int min = i;  
        //search for other min element than previous min element
		for (int j = i+1; j<n ; j++){
			if (a[j] < a[min]){
				min = j; 
			}
		}
        //swap previous min to current min
		swap(a[min] , a[i]);
	}

	for (int i = 0; i<n;i++){
		cout<<a[i]<<" ";
	}
}	