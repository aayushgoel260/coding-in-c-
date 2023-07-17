//program to find reverse of a number
#include<iostream>
using namespace std;
int main(){
    int a,rem,rev;
    rev=0;
    cout <<"Enter any number : ";
    cin>>a;
    while(a>0){
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    cout<<"Reverse of the number is "<<rev;
    return 0;
}
 



