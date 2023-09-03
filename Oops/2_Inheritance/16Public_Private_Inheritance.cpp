// parent(public)-> child(private inherited parent)-> data members in child also private (to use them you to use getters and setters).

#include <bits/stdc++.h>
using namespace std;

class Human{

    public:
    int height;
    int weight;
    int age;

};
class Male : private Human {

    public:
    int getHeight(){
        cout<<height;
    }
};
int main(){
    
    Male Intakhab; 
    // Intakhab.age; //  error

    Intakhab.getHeight(); // private can be accsses by getters and setters 

}