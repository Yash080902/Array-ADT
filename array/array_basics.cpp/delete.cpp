#include<iostream>
using namespace std;

struct array{
    int A[10];
    int size;
    int length;
};
int del(struct array *arr,int index) {
    if(index <= arr->length){
    for(int i=index;i<arr->length-1;i++){
        arr->A[i]=arr->A[i+1];
    }
    arr->length--;
}
}
 void display(struct array arr){
              for(int i=0;i<arr.length;i++)
                cout<<" "<<arr.A[i];
  }
int main(){
    struct array arr;
    cin>>arr.size;
    cin>>arr.length;
     for (int i =0;i<arr.length;i++)
     {
        cin>>arr.A[i];
     }
     del(&arr,5);
     cout<<"deleted element"<<endl;
     display(arr);
     return 0;
}