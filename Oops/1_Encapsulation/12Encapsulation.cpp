/*
Encapsulation = "information / data hiding"
Encapsulation: In normal terms, Encapsulation is defined as wrapping up of 
data and information under a single unit. 
Encapsulation is defined as binding together the data and the functions that manipulate them.

Fully encapsulated class = all data members are private , it can only be accessed within that class,
no other class can access that class data members.

Role of access specifiers
1-The data members should be labeled as private using the private access specifiers
2-The member function which manipulates the data members should be labeled as public using the public access specifier

why ? advantages
1-code reusability
2-data hiding
3-if we want we can make class "Read Only" by making only getters and not making setters
4-encapsulated code is better for unit testing

*/
#include <bits/stdc++.h>
using namespace std;

class dob{

    private:
    //private data members
    int day;
    string month;
    int year;

    public:
    //public get and set methods to access private variables and set and get their values
    //setter
    dob(int d , string s , int y){
        day = d;
        month = s;
        year = y;
    }
    //getter
    void print(){
        cout<<day<<endl;
        cout<<month<<endl;
        cout<<year<<endl;
        cout<<endl;
    }
};
int main(){
    
    dob student(10 , "dec" , 1998); 
    student.print();

}


