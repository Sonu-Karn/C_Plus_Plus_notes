// A program to input a number and check whether it is prime number or not.
#include <iostream>
using namespace std;
int main(){
    int a,i,c=0;
    cout<<"Enter any number "<<endl;
    cin>>a;
    for (int i = 1; i <=a; i++)
    {
         if (a%i==0)
         {
            c++;
        }
    }
         if(c==2){
             cout<<a<< " is a prime number";
         }else{
             cout<<a<<" is not a prime number";
         } 
     return 0;
 }