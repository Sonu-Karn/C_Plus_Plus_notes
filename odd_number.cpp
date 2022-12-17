// A program to find the odd numbers up to n using while loop where the value of n should be enter by user.
#include <iostream>
using namespace std;
int main(){
     int a,b,c=0,i=1;
     cout<<"Enter a number ";
     cin>>a;
     while (i<=a)
     {
         if(i%2!=0){
             cout<<i<< " ";
         }
         i++;
     }
      return 0;
}
