#include <bits/stdc++.h>
using namespace std;

class dob{
    public:

    int day;
    string month;
    int year;

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

    dob student1(10, "june" , 1998); 
    student1.getDay();
    student1.getMonth();
    student1.getYear();

    cout<<endl;
    //using default copy constructor to copy student1 to student 2
    dob student2(student1); //or dob student2 = student1;
    student2.getDay();
    student2.getMonth();
    student2.getYear();  

    cout<<endl;
    dob student3 = student2;  
    student3.getDay();
    student3.getMonth();
    student3.getYear(); 
}