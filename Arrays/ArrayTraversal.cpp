#include<iostream>
using namespace std;

int main(){
    int arr[]={1,8,33,45,95,20};
    int length= sizeof(arr)/sizeof(arr[0]);
    // traversing over array 
    for (int i=0;i<length;i++){
        cout<<arr[i]<<" -> ";
    }
}