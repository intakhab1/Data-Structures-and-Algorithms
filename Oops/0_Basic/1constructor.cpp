/*
Constructor has same name as the class itself
Default Constructors don’t have input argument however, Copy and Parameterized Constructors have input arguments
Constructors don’t have return type
A constructor is automatically called when an object is created.
It must be placed in public section of class.
If we do not specify a constructor, C++ compiler generates a default constructor for object (expects no parameters and has an empty body).
TYPES - default , parameterised , copy 
*/
#include <bits/stdc++.h>
using namespace std;

struct dob{
    public:

    //1- Default constructor invoked automatically
    dob(){
        cout<<"Constructor called"<<endl;
    }

};
int main(){
    
    cout<<"HI"<<endl;
    dob student; 
    cout<<"Hello"<<endl;

}