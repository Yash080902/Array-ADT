#include<iostream>
using namespace std;
             
int main(){
int n,m,i,j;
cout<<"enter the length of array1:-";
cin>>n;
cout<<"enter the length of array 2:-";
cin>>m;
int A[n] ,B[m],C[m+n];
printf("ENTER THE ARRAY 1 ELEMENTS");
for( i=0;i<n;i++){
    scanf("%d",&A[i]);
}
printf("enter the array 2 elements:-");
for( j=0;j<m;j++){
    scanf("%d",&B[j]);
}
int k=i=j=0;
while( i<n && j<m){
if(A[i]<B[j]){
    C[k++]=A[i++];
}
else {
    C[k++]=B[j++];
}
for(;i<n;i++) C[k++]=A[i];
for(;j<m;j++) C[k++]=B[j];
}
printf("MERGE BOTH THE ARRAYS IN C[] ARRAY");

for(k=0;k<m+n;k++){
    printf("%d ",C[k]);
}
return 0;
}
