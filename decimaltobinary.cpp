//covert decimal number to binary number
#include<iostream>
using namespace std;
int main(){
    int n,ans,power,digit;
    cout<<"Enter any number : ";
    cin>>n;
    ans=0;
    power=1;

    while(n>0){
        digit=n%2;
        ans+=digit*power;
        power*=10;
        n/=2;
    }
    cout<<"Binary representation of given number is : "<<ans;
    return 0;
}