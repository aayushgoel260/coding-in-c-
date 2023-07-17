#include<iostream>
using namespace std;
int main(){
    int n,sum,a,i,r;
    cout<<"Enter any number : ";
    cin>>n;
    a=n;
    sum=0;
    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    if(sum==a){
        cout<<a<<" is an armstrong number";
    }
    else{
        cout<<a<<" is not an armstrong number";
    }
    return 0;
}