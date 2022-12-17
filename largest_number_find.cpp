//A program to input three diffrent numbers and find the largest among 3 numbers.
 #include <iostream>
 using namespace std;
 int main(){
 int a,b,c;
 cout<<"Enter any three numbers "<<endl;
 cin>> a >>b >>c;
 if (a>b && a>c)
 {  
    cout<<""<<a<<" is a largest number among them";
 }else if (b>a && b>c)
 {  
    cout<<""<<b<<" is a largest number among them";
 }else if (c>a && c>b)
 {  
    cout<<""<<c<< " is a largest number among them";
 } else{  
    cout<<"All the numbers are equal";
 }
    return 0;
 }