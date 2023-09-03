/*
static function - creates a function which belong to class
we do not need to make object to access static function 
it has no this keyword (because this is pointer which point to current object and we do no have object)
static function can only access static data members

*/
#include <bits/stdc++.h>
using namespace std;

class dob{
    public:
    
    int day;
    string month;
    int year; 
    static int holidays;

    static int random(){
        // cout<<day; // error - can't access this data member
        return holidays;
    }
};

int dob :: holidays = 20; 

int main(){
    
    cout<< dob::random();  // no need to make object to access random static function 

}