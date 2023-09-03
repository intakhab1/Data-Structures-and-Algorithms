#include <bits/stdc++.h>
using namespace std;
class add{
    private:
        int a, b;
    public:
        add(int x, int y){
            a = x;
            b = y;
        }

        int sum(){    
            cout<<a+b;   
        } 
};
int main(){
    add foo_obj(3, 4);
    foo_obj.sum();
}  
