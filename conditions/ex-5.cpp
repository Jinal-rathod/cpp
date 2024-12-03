// Write a program to check a whether a character is a vowel or consonant.

#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout<<"Character is a vowel."<<endl;
    }else{
        cout<<"Character is a consonant."<<endl;
    }   
}