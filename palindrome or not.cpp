//progrram to check whether a given number is palindrome or not
#include<iostream>
using namespace std;
int main(){
    int a,rem,rev,c;
    rev=0;
    cout <<"Enter any number : ";
    cin>>a;
    c=a;
    while(a>0){
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    if(c==rev){
        cout<<"Yes, the number is palindrome";
    }
    else{
        cout<<"No, the number is not palindrome";
    }
    return 0;
}