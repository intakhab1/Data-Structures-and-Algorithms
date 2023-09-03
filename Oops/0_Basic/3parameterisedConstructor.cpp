#include <bits/stdc++.h>
using namespace std;

class dob{
    public:
    
    //properties
    int day;
    string month;
    int year;

    //2- parameterised constructor (to contruct object)
    // this keyword - it is a pointer that stores address of current object
    // here it stores the address of current object i.e student 
    dob(int d , string s , int y){
        this->day = d;
        this->month = s;
        this->year = y;
    }

    void getDay(){
        cout<<day;
    }
    void getMonth(){
        cout<<month;
    }
    void getYear(){
        cout<<year;
    }
};
int main(){

    dob student(10, "june" , 1998); //using parameterised constructor in single line

    student.getDay();
    student.getMonth();
    student.getYear();

    // dob principle;     //gives error
    
    //we cannot make other objects if we have parameterised contructor only
    //we should have both default and parameterised constructor in order to make more objects

}