#include<iostream>
using namespace std;
             
int main(){
int n,i,j;
cout<<"enter the length of array1:-";
cin>>n;
int A[n];
printf("ENTER THE ARRAY 1 ELEMENTS"); // for only sorted arrya this method valid
for( i=0;i<n;i++){
    scanf("%d",&A[i]);
}
int diff=A[0]-0;
for(int i=0;i<n;i++){
          if(A[i]-i!=diff){
                 printf("mising element in array is- %d\n",i+diff);
                 diff++;
          }
}
return 0;
}