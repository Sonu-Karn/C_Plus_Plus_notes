//A program display day using the switch statement depending upon the number entered i.e input 1 for Sunday, 7 for Saturday.
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of day ";
    cin>>a;
    switch (a)
    {
    case 1:
         cout<<"The day is Sunday";
         break;
     
     case 2:
         cout<<"The day is Monday";
         break;
     case 3:
        cout<<"The day is Tuesday";
        break;
    case 4:
         cout<<"The day is Wednesday";
         break;
     case 5:
         cout<<"The day is Thursday";
         break;
     case 6:
        cout<<"The day is Friday";
        break;
    case 7:
        cout<<"The day is Saturday";
        break;
     default:
            cout<<"Day is invalid";
     }
     return 0;
}