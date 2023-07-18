//program to tell the day acc to number using switch statement
#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter the day number";
    cin>>day;
    switch (day)
    {
    case 1:
    cout<<"Monday";
    break;
    case 2:
    cout<<"Tuesday";
    break;
    case 3:
    cout<<"wednesday";
    break;
    case 4:
    cout<<"Thurday";
    break;
    case 5:
    cout<<"friday";
    break;
    case 6:
    cout<<"saturday";
    break;
    case 7:
    cout<<"sunday";
    break;
    
    default:
    cout<<"Enter correct day";
        break;
    }
}