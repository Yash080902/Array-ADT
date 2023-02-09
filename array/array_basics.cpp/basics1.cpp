#include<iostream>
#include<stdlib.h>
  using namespace std;

  int main(){
    int *A,*Q;
    int size;
   int nsize;
    cin>>size;
    cin>>nsize;
    A= new int(size);
    for(int i=0;i<size;i++){
        cin>>A[i];
    }
    
    Q=new int[nsize];
                 for(int j=0;j<size;j++){
                               Q[j]=A[j];
                               Q=A;
                 }
cout<<"print the values of array Q "<<endl;;
     
     for(int i=0;i<nsize;i++){
        cout<< Q[i];
     }
     return 0;
     delete []A;
  }