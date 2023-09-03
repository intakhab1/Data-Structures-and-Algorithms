#include <bits/stdc++.h>
using namespace std;

class dob{
    public:
    
    //properties
    int day;
    string month;
    int year;
};
int main(){
    
    //creation of object from above blue print i.e class
    dob student; //static allocation
    student.day = 10;
    student.month = "dec";
    student.year = 1998;
    cout<<student.day<<" "<<student.month<<" "<<student.year<<" "<<endl;

    dob professor[10];
    professor[0].day = 26;
    professor[0].month = "june";
    professor[0].year = 2001;
    cout<<professor[0].day<<" "<<professor[0].month<<" "<<professor[0].year<<" "<<endl;
    
}