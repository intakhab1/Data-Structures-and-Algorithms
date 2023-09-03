#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    public:
    node(int d){
        data = d;
        next = NULL;
    }
};
void printList(node *n){
    while( n != NULL){
        cout<< n -> data<<endl;
        n = n -> next;
    }
}

void insertAtTail(node * &tail , int d){
    node* newNode = new node(d);
    // case1 when we have 0 nodes in list
    if(tail == NULL){
        tail = newNode;
        return;
    }
    //case2 when we have some nodes already present in list 
    // then we have to travel (o(n)) the list till last node 
    node *currNode = tail;
    while(currNode -> next != NULL){
        currNode = currNode -> next;
    }
    currNode -> next = newNode;
}

int main(){

    node *tail = NULL;

    insertAtTail(tail , 20);
    insertAtTail(tail , 30);
    insertAtTail(tail , 40);
    insertAtTail(tail , 50);
    insertAtTail(tail , 60);

    printList(tail);



}