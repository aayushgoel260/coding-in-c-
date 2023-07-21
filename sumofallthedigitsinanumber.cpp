#include<iostream>
using namespace std;
int main(){
    int n,r,sum;
    sum=0;
    cout<<"Enter any number : ";
    cin>>n;
    while(n!=0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    cout<<"\nSum of all the digits is : "<<sum;
    return 0;
}