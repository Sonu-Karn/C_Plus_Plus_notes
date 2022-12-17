// A program to create the muntiplication table of all the numbers from 1 to 3.
 #include <iostream>
 using namespace std;
 int main(){
     int i,j,m;
     cout<<"Muntiplication of 1 to 3"<<endl;
     for (int i = 1; i <=3; i++)
     {
         for (int j = 1; j<=10; j++)
         {
             m = i * j;
             cout<<i<< " * " <<j<< " = "<<m <<endl;
            }
         cout<<endl;        
    }    
  return 0;
 }