// insert an element at any postion 
#include<iostream>
using namespace std;

// function 
void insertElement(int arr[],int& size,int pos,int value){
    if(pos<0|| pos >size){
        cout<<"Invalid postion \n";
    }
    // shift element to the right
    for(int i=size;i>pos;i--){
        arr[i]=arr[i-1];
    }

    // Insert element at postion 
    arr[pos]=value;
    size++;
   
}

int main(){
int arr[20]={25,65,15,32,23,124,49,48,43,40,11};
int size=9;
int pos,value;
cout<<"Enter postion where you want to put value \n";
cin>>pos;
cout<<"enter value to \n";
cin>>value;
insertElement(arr,size,pos,value);

// after array insertion

for(int i=0;i<size;i++){
    cout<<arr[i]<<" -> ";
}
cout<<"\n";
}