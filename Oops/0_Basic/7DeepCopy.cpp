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

    // writing Own Copy Constructor to make deep copy(entirely differnt array) 
    //line 24 - making new char array( same size as name of student1 ) which is having differnt address.
    //line 25 - Copying name of student1 in new char array
    //line 26 - Changing the name of copy Student2 = ch i.e student 1

    dob(dob & student1){

        char *ch = new char[strlen(student1.name)];
        strcpy(ch , student1.name);
        name = ch;

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
    student1.print(); //

    dob student2(student1); //or dob student2 = student1; 
    student2.print();

    //own Copy constructor makes deep copy
    student1.name[0] = 'G';
    student1.print(); // Gntakhab

    student2.print(); // intakhab 

}