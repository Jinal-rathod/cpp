// Write a program to find the smallest of three numbers.

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b && a<c){
        cout<<"A is smallest number."<<endl;
    }else if(b<c){
        cout<<"B is smallest number."<<endl;
    }else if(c<a){
        cout<<"C is smallest number."<<endl;
    }else{
        cout<<"It's equal number."<<endl;
    }
}