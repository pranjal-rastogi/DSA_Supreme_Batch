#include<iostream>
using namespace std;
int main(){
    int a=45;
    cout<<"Value of a : "<<a<<endl;
    cout<<"Size of integer : "<<sizeof(a)<<endl;

    char ch='a';
    cout<<"value of ch : "<<ch<<endl;
    cout<<"Size of character : "<<sizeof(ch)<<endl;
    
    bool flag=false;
    cout<<"value of flag : "<<flag<<endl;
    cout<<"Size of boolean : "<<sizeof(flag)<<endl;

    float f=1.23;
    cout<<"value of f : "<<f<<endl;
    cout<<"Size of floating : "<<sizeof(f)<<endl;

    double d=1.23456;
    cout<<"value of d : "<<d<<endl;
    cout<<"Size of double : "<<sizeof(d)<<endl;
}