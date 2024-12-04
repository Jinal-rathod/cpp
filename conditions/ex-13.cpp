// Write a program to find maximum of three numbers using nested if-else.

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"A is maximum number."<<endl;
    }else if(b>c){
        cout<<"B is maximum number."<<endl;
    }else if(c>a){
        cout<<"C is maximum number."<<endl;
    }else{
        cout<<"It's equal number."<<endl;
    }
}