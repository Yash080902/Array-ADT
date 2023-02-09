#include<iostream>
using namespace std;

struct array{
    int A[10];
    int size;
    int length;
};
void insert(struct array *arr ,int index, int x){
    if(index>0 && index<arr->length){
        for(int j=arr->length;j>=index;j--){
               arr->A[j]=arr->A[j-1];
        } 
        arr->A[index]=x;
        arr->length++;
}
}
// void insert(struct array *arr,int index,int x)
//  {
//  int i;
 
//  if(index>=0 && index <=arr->length)
//  {
//  for(i=arr->length;i>index;i--)
//  arr->A[i]=arr->A[i-1];
//  arr->A[index]=x;
//  arr->length++;
//  }
//  }
void append(struct array *arr,int x){
           if(arr->length<arr->size){
            arr->A[arr->length++]=x;
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
    //  append(&arr,19);
     insert(&arr,3,12);
     display(arr);
     return 0;
}
     

