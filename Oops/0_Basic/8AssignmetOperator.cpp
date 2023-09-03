#include <bits/stdc++.h>
using namespace std;

class dob{
    public:

    
    string name; 
    int day;
    string month;
    int year;
  
    void setName(string s){
        name = s; 
    }  
    void print(){
        cout<<name<<endl;
        cout<<endl;
    }
};
int main(){


    dob student1; 
    student1.setName("Intakhab");
    student1.print(); 

    dob student2;
    student2.setName("vishal");
    student2.print();

    //using assigment operator to copy two objects
    student2 = student1;
    
    student1.print(); 
    student2.print(); 

}