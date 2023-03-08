#include<iostream>
using namespace std;
int main(){
   char a=1024;
   cout<<a<<endl;

    // implicit conversion 
    char ch=97;
    cout<<ch<<endl;

    int num='b';
    cout<<num<<endl;

    //explicit conversion
    double d=5.7;

    int x=(int)d+2;
    cout<<"Value of x is : "<<x<<endl;
}
