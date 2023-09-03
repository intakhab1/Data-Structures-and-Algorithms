// class atumatically create default destructor on initialization just like constructor
//destructor deallocate memory when the program is executed
//destructor has same name as your class name just like constructor
//it has no return type just like constructor
//it has no input parameter

/*
What is a destructor? 
Destructor is an instance member function which is invoked automatically whenever an object is going to be destroyed. Meaning, a destructor is the last function that is going to be called before an object is destroyed.

Destructor is also a special member function like constructor. Destructor destroys the class objects created by constructor. 
Destructor has the same name as their class name preceded by a tiled (~) symbol.
It is not possible to define more than one destructor. 
The destructor is only one way to destroy the object create by constructor. Hence destructor can-not be overloaded.
Destructor neither requires any argument nor returns any value.
It is automatically called when object goes out of scope. 
Destructor release memory space occupied by the objects created by constructor.
In destructor, objects are destroyed in the reverse of an object creation.
*/
#include <bits/stdc++.h>
using namespace std;

class dob{
    public:

    //default constructor
    dob(){
        cout<<"Constructor called"<<endl;
    }
    //default destructor
    ~dob(){
        cout<<"Destructor called"<<endl;
    }
};
int main(){


    dob student1; // static allocation - destructor automatically called

    dob *student2 = new dob; // dynamic allocation 
    delete student2; // we have to manually call destructor
 
} 