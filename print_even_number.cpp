// A program to print even number.
 #include <iostream>
 using namespace std;
 int main(){
     int a,b,c=1,d=0;
     cout<<"Enter a number ";
     cin>>a;
     while (c<=a)
     {
         if (c%2==0)
         {
            cout<<c<< " ";
         }
         c++;
     }
     return 0;
 }