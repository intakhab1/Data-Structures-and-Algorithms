#include <bits/stdc++.h>
using namespace std;

class dob{
    public:

    char *name; //or char name[100] //bad practice
    int day;
    string month;
    int year;

    dob(){
        name = new char[100];
    }

    void setName(char ch[]){
        name = ch; 
    }  
    void print(){
        cout<<name<<endl;
        cout<<endl;
    }
};
int main(){
    char name[10] = "intakhab";

    dob student1; 
    student1.setName(name);
    student1.print();

    dob student2(student1);  
    student2.print();

    //Default Copy constructor makes shallow copy
    student1.name[0] = 'G';
    student1.print(); // Gntakhab

    student2.print(); // Gntakhab //changes in student1 refelcts here
    //because we have taken name as pointer i.e *name
    //when we previously copied student2 from student1 
    //we have stored address of name student2
    //when we make change in name of student1
    //student2 will also reflect this change as it was storing the address of name in which changed happen 
}