#include<iostream>
using namespace std;

class Node{

public:
  int data;
  Node* next;
//   Constructor to initilize a node
Node(int value){
    data=value;
    next=nullptr;
}
};

class Linklist{
    Node* head;

    public:
    Linklist(){
        head=nullptr;
    }
    // method to inser node at the end of linklist
   void insert(int value){
    Node* newNode=new Node(value);

    if(head==nullptr){
        head=newNode;
    }
    else{
        Node* temp=head;
        while (temp -> next != nullptr)
        {
            temp=temp->next;
        }
        temp->next=newNode;
        
    }
   }
  void display(){
    Node* temp=head;
    while(temp != nullptr){
        cout<<temp->data << " -> ";
        temp=temp->next;
    }
    cout<<"null putr"<<endl;
  }
};
int main(){
    Linklist list;
    list.insert(10);
    list.insert(20);

    list.insert(30);


    list.insert(40);

    list.insert(5);
    
cout<<"Link list ----"<<endl;

    list.display();

}


