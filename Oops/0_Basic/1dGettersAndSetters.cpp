#include <bits/stdc++.h>
using namespace std;

struct dob{
    public:
    
    //properties
    int day;
    string month;
    int year;

    void setDay(int d){
        day = d;
    }
    void setMonth(string m){
        month = m;
    }
    void setYear(int y){
        year = y;
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
    
    //creation of object from above blue print i.e class

    dob student; //static allocation
    //using getters and setters function

    student.setDay(10);
    student.setMonth("dec");
    student.setYear(1998);

    student.getDay();
    student.getMonth();
    student.getYear();

    dob professor[10];
    professor[0].setDay(30);
    professor[0].setMonth("may");
    professor[0].setYear(1995);

    professor[0].getDay();
    professor[0].getMonth();
    professor[0].getYear();

}