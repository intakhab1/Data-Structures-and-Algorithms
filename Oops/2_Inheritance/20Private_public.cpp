// parent(private)-> child( data members in child can never be accessed either public , protected , private)

#include <bits/stdc++.h>
using namespace std;

class Human{

    private:
    int height;
    int weight;
    int age;

};
class Male : public Human { 

    public:
    int getHeight(){ // cannot even access here the member of Human
        cout<<height;
    }
};
// class Male : protected Human { 

//     public:
//     int getHeight(){ // cannot even access here the member of Human
//         cout<<height;
//     }
// };
// class Male : private Human { 

//     public:
//     int getHeight(){ // cannot even access here the member of Human
//         cout<<height;
//     }
// };
int main(){
    
    Male Intakhab; 
    // Intakhab.age; //  error

    Intakhab.getHeight(); // error

}