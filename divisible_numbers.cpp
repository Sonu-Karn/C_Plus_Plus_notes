// A program to input a number and display it if is exactly divisible by 5 but not by 11
 #include <iostream>
 using namespace std;
 int main(){
   int a,b,c;
    cout<<"Enter a number ";
   cin>>a;
   if (a%5==0 && a%11!=0)
   {
   cout<<"number is divisible 5 but not by 11";
   }    
   return 0;
 }