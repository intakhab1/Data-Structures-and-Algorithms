#include<iostream>
using namespace std;

int main(){

    int n , m;
    cin>>n>>m;

    vector<int> adj[n+1];
    for(int i = 0 ; i<m , i++){
        
        int x , y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

// For directed graph x--->y
int main(){
    int n , m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i = 0 ; i<m , i++){
        int x , y;
        cin>>x>>y;
        adj[x].push_back(y);  // x ---> y only.
    }
}