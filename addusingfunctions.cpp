// program to add numbers of int and flaot data  type using user defined functions
#include<iostream>
using namespace std;
int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}
int add(int num1,int num2, int num3){
    int sum=num1+num2+num3;
    return sum;
}
float add(float num1,float num2){
    float sum=num1+num2;
    return sum;
}
int main(){
    int a=5;
    int b=2;
    int c=7;
    float d=5.6;
    float e=9.6;
    cout<<add(a,b)<<endl;
    cout<<add(a,b,c)<<endl;
    cout<<add(d,e)<<endl;
}