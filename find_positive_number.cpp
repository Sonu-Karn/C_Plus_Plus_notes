// A program to find the large value among four numbers using nested if statement.
#include <iostream>
using namespace std;
int main(){
    char c;
    cout<<"input a character" <<endl;
    cin>>c;
    if (c>='a' && c<='z')
    { 
         cout<<"lowercase letter";
    }else if (c>='A' && c<='Z')
    { 
         cout<<"Uppercase letter";
    }else if (c>='0' && c<='9')
    { 
         cout<<"Positive number";
    }else{ 
         cout<<"unknown character";
    }
    return 0;
 }