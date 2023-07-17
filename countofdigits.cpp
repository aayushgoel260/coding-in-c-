//program to count the total number of digits in a number
#include<iostream>
using namespace std;
int main(){
    int a,r,count;
    count=0;
    cout<<"Enter any number : ";
    cin>>a;
    while(a>0){
        r=a%10;
        count+=1;
        a=a/10;
    }
    cout<<"\nTotal number of digits inn the given number is : "<<count;
    return 0;
}