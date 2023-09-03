#include <bits/stdc++.h>
using namespace std;

void increment( int n ){
    if(n == 0) return;
    increment(n-1);
    cout<<n;
}
void decrement( int n ){
    if(n == 0) return;
    cout<<n;
    decrement(n-1);
}
int main(){
    increment(5);
    decrement(5);
}