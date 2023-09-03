#include <bits/stdc++.h>
using namespace std;
// double multiply(double number, int n) {
//     double ans = 1.0;
//     for(int i = 1;i<=n;i++) {
//         ans = ans * number;
//     }
//     return ans; 
// }
double power(double x , long n){ // converting int n = long n to store if n = -2^31
	if(n == 0) return 1.0;
	if(n == 1) return x;
	if(n < 0) return pow(1/x , -n);
	double ans = 1;
	while(n > 0){
		if(n % 2 == 0){
			x = x*x;
			n = n / 2;
		}
		else if(n % 2 == 1){
			ans = ans * x;
			n = n - 1;
		}
	}
	return ans;
}
void getNthRoot(int n, int x) {
    double low = 1;
    double high = x;
    double eps = 1e-6; 
    
    while((high - low) > eps) {
        double mid = low + (high - low) / 2; 
        if(power(mid, n) < x) {
            low = mid; 
        }
        else {
            high = mid; 
        }
    }
    cout <<n<<"th root of "<<x<<" is "<<low<<endl; 
}
int main() {
	int n=4, x=27; 
	getNthRoot(n, x); 
	return 0;
}