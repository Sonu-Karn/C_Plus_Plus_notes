// A program to detmonstrate the use of if statements
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a number of a " ;
    cin>>a;
    cout<<"Enter a number of b ";
    cin>>b;
    if (a==b)
    {
        cout<<"Both numbers are equal";
    }else if (a>b)
    {
        cout<<"a is greater then b";
    }else{
        cout<<"b is greater then a";
    }
       return 0;
}