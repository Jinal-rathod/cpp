// Write a program to find the largest of two number entered by the user.

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<"A is largest number."<<endl;
    }else if(b>a){
        cout<<"B is largest number."<<endl;
    }else{
        cout<<"It's equal number."<<endl;
    }
}