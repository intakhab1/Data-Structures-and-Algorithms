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
void insertAtPosition( node * & head , int position , int d){
    node * curr = head;
    int count = 0;
    while(count < position){
        curr = curr -> next;
        count++;
    }
    // creating a node for d
    node* newNode = new node(d);
    newNode -> next = curr -> next;
    curr -> next = newNode;
}
int main(){
    
    // node *node1 = new node(2);
    node *head = NULL;
    node *tail = NULL;
    // insertAtHead(head , 5);
    // insertAtHead(head , 10);
    insertAtTail(tail , 20);
    insertAtTail(tail , 30);
    insertAtTail(tail , 40);
    insertAtTail(tail , 50);
    insertAtTail(tail , 60);
    // printList(head);
    printList(tail);



}