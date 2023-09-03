// parent(public)-> child(publicly inherited parent)-> data members in child also public.
#include <bits/stdc++.h>
using namespace std;

class Human{

    public:
    int height;
    int weight;
    int age;

};
class Male : public Human {

};
int main(){
    
    Male Intakhab; 
    Intakhab.age; // No issue

}