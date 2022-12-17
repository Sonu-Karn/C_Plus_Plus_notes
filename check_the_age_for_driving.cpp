//A program to input age of a person and find out whether the person is eligible for driving or not.
 #include <iostream>
 using namespace std;
 int main(){
 int a,b;
 cout<<"Enter your age ";
 cin>>a;
 if (a>=18)
 {  
     cout<<"You're eligible for driving";
 }else{  
     cout<<"You're not eligible for driving";
 }
 return 0;
 }