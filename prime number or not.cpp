//program to check whether the given number is prime or not
#include<iostream>
using namespace std;
int main(){
    int a;
    bool is_prime=true;
    cout<<"Enter any number : ";
    cin>> a;
    if(a==0||a==1){
        is_prime=false;
    }
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            is_prime=false;
        }
    }
    if(is_prime){
        cout<<a<<" is a prime number";
    }
    else {
        cout<<a<< " is not a prime number";
    }
    return 0;
}