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

    dob student; //static allocation

    //dyanamic allocation (accessing using * dereference operator)
    // dob *principle = new dob() //or
    dob *principle = new dob;
    (*principle).setDay(25);
    (*principle).setMonth("april");
    (*principle).setYear(1885);

    (*principle).getDay();
    (*principle).getMonth();
    (*principle).getYear();
    cout<<endl;

    //dyanamic allocation ( using -> arrow operator)
    dob *principle2 = new dob;
    principle2->setDay(15);
    principle2->setMonth("Dec");
    principle2->setYear(1895);

    principle2->getDay();
    principle2->getMonth();
    principle2->getYear();

}