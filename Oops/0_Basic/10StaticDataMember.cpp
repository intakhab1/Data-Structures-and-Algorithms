/*
static data member - creates a data member which belong to class
we do not need to make object to access this 
*/
#include <bits/stdc++.h>
using namespace std;

class dob{
    public:
    
    int day; // non static data member
    string month;
    int year; 
    static int holidays;  //static data member
};
//initilizing static data member
int dob :: holidays = 20; // :: = scope resolution operator

int main(){
    
    cout<< dob::holidays; // no need to make object to access holiday data member
}