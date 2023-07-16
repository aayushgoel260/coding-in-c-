///progeram to swap two numbers without using third number
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter any two numbers : ";
    cin >> a>> b;
    cout << "Numbers before swapping are "<<a<<" and "<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "\nNumbers after swapping are "<<a<<" and "<<b;
    return 0;
}


//program to check whether the given number is even or odd
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<< "Enter the number : ";
    cin>> a;
    if(a%2==0){
        cout<<a<<" is an even number";
    }
    else{
        cout<<a<<" is an odd number";
    }
    return 0;
}



//program to find the size of various data types
#include<iostream>
using namespace std;
int main(){
    int a=1;
    cout<<"Size of integer data type is : "<<sizeof(a);
    char b;
    cout<<"\nsize of char data type is : "<<sizeof(b);
    float c;
    cout<<"\nsize of float data type is : "<<sizeof(c);
    return 0;
}



//incremennt and decrement operators
#include<iostream>
using namespace std;
int main(){
    int a=5;
    cout<<a++<<endl;
    cout<<a--<<endl;
    cout<<a<<endl;
    int b=10;
    cout<<++b<<endl;
    cout<<--b<<endl;
    cout<<b<<endl;
    return 0;
}