#include<iostream>
using namespace std;

// in   C programming language 
struct array{
int *A;
int size;
int length;
};

struct array arr;
  int display(struct array arr){
    int i;
    cout<<"these are the displayed elements"<<endl;
    for(i=0;i<arr.length;i++){
    cout<<arr.A[i];
  }
  }

  void InsertSort(struct Array *arr,int x)
{
 int i=arr->length-1;
 if(arr->length==arr->size)
 return;
 while(i>=0 && arr->A[i]>x)
 {
 arr->A[i+1]=arr->A[i];
 i--;
 }
 arr->A[i+1]=x;
 arr->length++;
 
}
  int main(){
    struct array *arr;

  }