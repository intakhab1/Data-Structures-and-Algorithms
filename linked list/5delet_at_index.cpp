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

void printList(node *head){
    if(head == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    while( head != NULL){
        cout<< head -> data <<endl;
        head = head -> next;
    }
}
void insertAtHead(node * &head , int d){

    //case1- if there is no node present then we make a newNode and point head to that newNode
    node* newNode = new node(d);
    if(head == NULL){
        head = newNode;
        return;
    }
    //case2- now we already had atleast 1 node
    newNode ->next = head;
    head = newNode;
}

void insertAtLast(node * &head , int d){
    //case1- if there is no node present then we make a newNode and point head to that newNode
    node* newNode = new node(d);
    if(head == NULL){
        head = newNode;
        return;
    }
    //case2 when we have some nodes already present in list 
    // then we have to travel (o(n)) the list till last node 
    node *curr = head;
    while(curr -> next != NULL){
        curr = curr -> next;
    }
    //we are at last node
    curr -> next = newNode;
}
void insertAtPosition(node * & head , int position , int d){
    //case 1 position = 0
    if(position == 1){
        insertAtHead(head , d);
        return;
    }

    node * curr = head;
    int count = 1;
    while(count < position - 1){
        curr = curr -> next;
        count++;
    }
    //case2 inseerting at last position
    if(curr -> next == NULL){
        insertAtLast(head , d);
        return;
    }
    // creating a node for d
    node* newNode = new node(d);
    newNode -> next = curr -> next;
    curr -> next = newNode;
}
void deleteNode(node * & head , int position){
    //case1 delete 1st node
    if(position == 1){
        node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
        return;
    }
    //case2 delete middle and last
    node * prev = NULL;
    node * curr = head;
    int count = 1;
    while(count < position){
        prev = curr;
        curr = curr -> next;
        count++;
    }
    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;
}
int main(){

    node *head = NULL;

    insertAtLast(head , 20);
    insertAtLast(head , 30);
    insertAtLast(head , 40);
    insertAtLast(head , 50);
    insertAtLast(head , 60);

    insertAtPosition(head , 6 , 5); 
    deleteNode(head , 5); 


    printList(head);



}