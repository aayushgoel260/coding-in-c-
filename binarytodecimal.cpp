//progrm to convet a binary number to decimal number
#include<iostream>
using namespace std;
int main(){
    int n,lastdigit,ans,power;
    cout<<"Enter any number : ";
    cin>>n;
    ans=0;
    power=1;
    while(n>0){
        int lastdigit=n%10;
        ans=ans + (lastdigit*power);
        power*=2;
        n=n/10;
    }
    cout<<"its decimal number is : "<<ans;
    return 0;

}