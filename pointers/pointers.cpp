#include <bits/stdc++.h>
using namespace std;

int main(){
  
//1 vectors and pairs

  pair<int,int> p;
  p.first = 3;
  p.second = 5;

  vector<int> v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);

  for(auto i:v){
    cout<<i<<" ";
  }
                   //10 20 30
 //a. 
  // for(int i = 0; i<v.size(); i++){
  //   cout<<v[i]<<" ";
  // }
//b.  
  // iterators
//c.  
// by using (auto and Range based loop)

	  int n = 4;
    vector<int> v(n,5);
    for(auto i:v){
    cout<<i<<" ";
    }                   // 5 5 5 5 

//2 References 
/*
- pass variables by reference
- safer and easy to use over pointers
- they are like const pointer ie cannot
refer to another location or another variable
-cannot be null ex . int &x = null
*/
wrong
// int &y;
// int x = 10;
// y = x
right =  always assingned reference after variable is declared
int x = 10;
int &y;
y = x

//a. using references (&) to change the actual value 
	vector<pair<int,int>> vp = {{1,3},{2,5}};
	for(auto &i :vp){                         //      1 3
		cout<<i.first<<" "<<i.second<<endl;   //        2 5
	}
    vector<int> v {10, 20, 30};
    for(auto &i:v){
    cout<<i+5<<" ";              //15 25 35

  }vector<int> v2 {10,20,30};   // it will make copy of v2 without &
  for(auto i: v2){
  	cout<<i+5<<" ";             // 10 20 30
  }

//b. Reference example
// a.
  int x = 10, z= 20;
  int &y = x;         
  y = z;        // x and y both equal to 20
  y = y+5;      // x and y both equal to 25
  cout<<x<<" "<<y<<" "<<z;      // 25 25 20

// b.
  int &fun(){
    static int x = 10;
    return x;
  }
  int main(){
    int &z = fun();
    cout<<fun()<<" ";
    z= 30;
    cout<<fun();            //10 30
  }

//3 POINTERS 
/* 
-They are datatype to store address of a variable.

*/
int main(){
	int x = 4;	//use &x to get address of variable x
	int *p_x = &x ;	// declaring a pointer p_x which stores address of an integer variable x at *p_x
	cout<<"Address of x : "<<&x <<endl;
	cout<<"value of p_x : "<< p_x <<endl;
	cout<<"value at *p_x : "<< *p_x <<endl;
	//To change value of x using pointer
	*p_x = 5; 		// or x = 5
	cout<<"x : "<<x<<endl;
	cout<<"p_x + 1 : "<< p_x + 1<<endl; 	//addtion in pointer

//2 Double pointer
	int **p_p_x = &p_x;   //storing address of pointer in double pointer
	cout<<"Address of p_x : "<< &p_x <<endl;
	cout<<"Value of p_p_x : "<< p_p_x <<endl;
	cout<<"Value at *p_p_x : "<< *p_p_x <<endl;
	cout<<"Value at **p_p_x : "<< **p_p_x <<endl;
	**p_p_x = 7;
	cout<<"x : "<<x<<endl;

//3 Pointers in array 
	int a[10];  // a is itself a address of first element i.e a[0]
	a[0] = 2;
	a[1] = 4; 
	cout<<"address of a : "<< a <<endl; // it prints an address so it proves that a is a pointer
	cout<<"&a[0] : "<< &a[0]<<endl;     // equal to address of a or &a
	cout<<"*a : "<<*a<<endl;      		// prints the value of a[0]
	cout<<"*(a+1) : "<<*(a+1)<<endl;	// goes to next element i.e a[1]
	cout<<"&a[1] : "<< &a[1]<<endl;     // equal to address of a or &a

	cout<< *(a+1)<<" "<< a[1]<<endl;// both *(a+1) and a[1] are equal
	
//NOTE don't use pointers use cpp reference

// OUTPUT :
Address of x : 0x61ff08
value of p_x : 0x61ff08
value at *p_x : 4
x : 5
p_x + 1 : 0x61ff0c
Address of p_x : 0x61ff04
Value of p_p_x : 0x61ff04
Value at *p_p_x : 0x61ff08
Value at **p_p_x : 5
x : 7
address of a : 0x61fedc
&a[0] : 0x61fedc
*a : 2
*(a+1) : 4
&a[1] : 0x61fee0
4 4

//Application of pointers
//a. changing passed parameters (swap)


