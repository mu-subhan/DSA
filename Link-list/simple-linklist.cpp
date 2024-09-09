#include<iostream>
using namespace std;

struct  Node{
    int data;
    Node* next;
};
int main(){
//  Allocated three node in heap

Node* head=new Node();
Node* second = new Node();
Node* third = new Node();

// Asign data value 

head->data=5;
head->next=second;

second->data=8;
second->next=third;

third->data=10;
third->next=nullptr;

// print the linklist

Node*temp=head;
while (temp!=nullptr)
{
    cout<<temp->data<<" "<<endl;
    temp = temp->next;
}
delete head;
delete second;
}

