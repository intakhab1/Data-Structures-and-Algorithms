// parent(protected)-> child(protected inherited parent)->data members in child also protected (to use them you to use getters and setters).

#include <bits/stdc++.h>
using namespace std;

class Human{

    protected:
    int height;
    int weight;
    int age;

};
class Male : protected Human {

    public:
    int getHeight(){
        cout<<height;
    }
};
int main(){
    
    Male Intakhab; 
    // Intakhab.age; //  error

    Intakhab.getHeight(); // protected can be accsses by getters and setters just like Private

}