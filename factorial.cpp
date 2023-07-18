#include<iostream>
using namespace std;
int main(){
    int n,a,fact=1;
    cout<<"Enter any number :";
    cin>>n;
    if(n<0){
        cout<<"Invalid number, factorial cannot be found";
    }
    else{
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        cout<< "Factorial is " <<fact;
    }
    return 0;
}