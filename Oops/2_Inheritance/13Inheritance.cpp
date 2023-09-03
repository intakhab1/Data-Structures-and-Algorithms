/*
Inheritance is the process of inheriting the properties and behavior of an existing class into a new class. 
When we inherit the class, we can reuse the existing class’s methods and fields into a new class. 
Inheritance can also be defined as the Is-A relationship, which is also known as the parent-child relationship

Important terminology of inheritance 
● Sub Class : The class that inherits properties from another class is called Subclass or Derived Class. 
● Super Class : The class whose properties are inherited by subclass is called Base Class or Superclass.

Modes of Inheritance 
1. Public mode: If we derive a subclass from a public base class. 
Then, the base class’s public members will become public in the derived class, 
and protected class members will become protected in the derived class. 

2. Protected mode: If we derive a subclass from a Protected base class. 
Then both public members and protected members of the base class will become protected in the derived class. 

3. Private mode: If we derive a subclass from a Private base class. 
Then both public members and protected members of the base class will become Private in the derived class.

C++ inheritance syntax: 
class parent_class { 
    //Body of parent class 
}; 
class child_class : access_modifier parent_class {
     //Body of child class 
};
*/
#include <bits/stdc++.h>
using namespace std;

class Human{

    public:
    int height;
    int weight;
    int age;

    public:
    void setHeight(int d){
        height = d;
    }
    void setWeight(int m){
        weight = m;
    }
    void setAge(int y){
        age = y;
    }
    void getHeight(){
        cout<<height;
    }
    void getWeight(){
        cout<<weight;
    }
    void getAge(){
        cout<<age;
    }
};
class Male : public Human {

    private:
    int collegeYear;

    public:
    int eat(){
        cout<<"eating";
    }
    void setCollegeYear(int c){
        collegeYear = c;
    }
    void getCollegeYear(){
        cout<<collegeYear;
    }
};
int main(){
    
    Male Intakhab; 
    Intakhab.age; //Human::age' is private 
    //we can access private from parent class if parent class has getters 
    Intakhab.setHeight(170);
    Intakhab.setWeight(70);
    Intakhab.setAge(21);
    Intakhab.setCollegeYear(3);

    Intakhab.getHeight();
    Intakhab.getWeight();
    Intakhab.getAge();
    Intakhab.getCollegeYear();


}