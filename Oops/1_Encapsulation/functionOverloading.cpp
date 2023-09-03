#include <bits/stdc++.h>
using namespace std;
class add{
    public:
    int a , b;

    public:
    
    int sum(){
        cout<<a + b;
    }
    void operator() (){
        cout<<"brackets";
    }
    void operator+ (add obj){
        cout<<"add";
    }

};
int main(){
    add obj1 , obj2;
    // obj1.a = 1;
    // obj2.b = 3;

    obj1 + obj2;
    obj2();
}  