// Write a program to classify a character as alphabet, digit or special charcter.

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter any character : ";
    cin>>ch;
    if('a'<=ch || ch>='z' || 'A'<=ch || ch>='Z'){
        cout<<"charcter is alphabet.."<<endl;
    }else if('0'<=ch && ch<='9'){
        cout<<"charcter is digit.."<<endl;
    }else{
        cout<<"charcter is special charcter.."<<endl;
    }
}
