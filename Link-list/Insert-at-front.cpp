#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
// constuctor
Node(int val):value(val), next(nullptr) {}

};

// create a linklist
 class Linklist{
    public:
    Node* head;

void insertFront(int value){
   
    cout<<"Inserting "<<value<<endl;

    // step 1 => create a new node
    Node* newNode = new Node(value);
    // step 2 => set next of new node to the current head
    newNode->next= head;
    // step 3 => set newNode as the head
    head=newNode;
}
int getHeadValue(){
    if(head==NULL){
        return -1;
    }else{
        return head -> value;
    }
}
 };



int main(){
 Linklist *list=new Linklist();
 list->insertFront(2);
 cout<<"the value at the head is " <<list->getHeadValue()<<endl;
 list->insertFront(3);
 cout<<"the value at the head is "<< list->getHeadValue()<<endl;
}