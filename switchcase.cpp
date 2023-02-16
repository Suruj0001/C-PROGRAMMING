#include<iostream>
using namespace std;
int main(){
// Write a program to write a simple calculator
int a, b;
char op;
cout<<"Enter 2 numbers : ";
cin>>a>>b;
cout<<"Enter the operator : ";
cin>>op;
    switch (op)
    {
    case '+':
    cout<<a+b<<endl;
    break;
    case '-':
    cout<<a-b<<endl;
    break;
    case '*':
    cout<<a*b<<endl;
    break;
    case '%':
    cout<<a%b<<endl;
    
    default:
    cout<<"undefined operator"<<endl;
        break;
    }
    return 0;
}