#include<iostream>
using namespace std;
  int main(){
    int n;
    cin>>n;
    int rev=0;
    int r;
    int x=n;
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==x){
        printf("yes it is palindrome");
    }
    else {
        cout<<"no";
    }
    return 0;
  }