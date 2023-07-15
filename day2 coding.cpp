//program to find greatest of three numbers
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter any three numbers : ";
    cin >> a >> b >> c;
    if(a>b && b>c){
        cout << a << " is greatest of three numbers";
    }
    else if(b>a && b>c){
        cout << b << " is greatest of three numbers";
    }
    else{
        cout << c << " is greatest of three numbers";
    }
    return 0;
}

//program to find average of two numbers
#include<iostream>
using namespace std;
int main(){
    int a,b;
    float avg;
    cout << "Enter any two numbers : ";
    cin >> a>>b;
    avg=(a+b)/2;
    cout<< "average of "<<a<<" and "<<b<<" is "<<avg;
    return 0;
}

//program to swap two numbers using third variable
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<< "Enter any two numbers : ";
    cin>> a>>b;
    cout<<"\nbefore swapping a is "<<a;
    cout <<"\nbefore swapping b is "<<b;
    c=a;
    a=b;
    b=c;
    cout<<"\nafter swapping a is "<<a;
    cout <<"\nafter swapping b is "<<b;
    return 0;
}
