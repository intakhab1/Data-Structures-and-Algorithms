#include<iostream>
using namespace std;

 long long int sqrtInteger(int n) {
        
        int s = 1;
        int e = n;
        
        double ans = 1;
        double eps = 1e-6; 
    
    while((e - s) > eps) {
        double mid = s + (s + e) / 2.0; 
        double square = mid*mid;
        if(square < n) {
            s = mid; 
        }
        else {
            e = mid; 
        }
    }
    
    cout<<s<<endl; 
    }

double morePrecision(int n, int precision, int tempSol) {
    
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout <<" Enter the number " << endl;
    cin >> n;

    int tempSol = sqrtInteger(n);
    cout<<tempSol;
    cout<<endl;
    cout <<" Answer is " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}

