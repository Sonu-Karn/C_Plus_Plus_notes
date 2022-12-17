// Calculate area & perimeter of a rectangle.
 #include <iostream>
 using namespace std;
 int main(){
    int A,l,b,P;
    cout<<"Enter the Length of & breadth of a rectangle ";
    cin>>l >>b;
     A = l*b;
     P= 2*(l + b);
     cout<<"The area & perimeter of a rectangle having Length " <<l<< " & breadth "<<b<< " is "<<endl<<"Area = "<<A <<endl<< "Perimeter = "<<P ;
     return 0;
 }