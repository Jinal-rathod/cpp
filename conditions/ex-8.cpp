// Write a program to check if a character is an uppercase or lowercase letters.

#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if(ch=='a' || ch=='b' || ch=='c' || ch=='d' || ch=='e' || ch=='f' || ch=='g' || ch=='h' || ch=='i' || ch=='j' || ch=='k' || ch=='l' || 
    ch=='m' || ch=='n' || ch=='o' || ch=='p' || ch=='q' || ch=='r' || ch=='s' || ch=='t' || ch=='u' || ch=='v' || ch=='w' || ch=='x' || 
    ch=='y' || ch=='z'){
        cout<<"Character is an lowercase."<<endl;
    }else{
    cout<<"Character is an uppercase."<<endl;
    }
}