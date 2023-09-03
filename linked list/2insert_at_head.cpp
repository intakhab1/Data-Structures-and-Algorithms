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
void insertAtHead(node * &head , int d){
    // step1 crate new node
    node *newNode = new node(d);
    newNode ->next = head;
    head = newNode;
}

int main(){

    node *head = NULL;

    insertAtHead(head , 5);
    insertAtHead(head , 10);
    insertAtHead(head , 20);
    insertAtHead(head , 40);

    printList(head);



}