// Write a program to disply the day of the week based on the input number(1-7).

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number (under 1-7) : ";
    cin>>num;
    if(num==1){
        cout<<"Sunday :)"<<endl;
    }else if(num==2){
        cout<<"Monday :)"<<endl;
    }else if(num==3){
        cout<<"Tuesday :)"<<endl;
    }else if(num==4){
        cout<<"Wendsday :)"<<endl;
    }else if(num==5){
        cout<<"Thursday :)"<<endl;
    }else if(num==6){
        cout<<"Friday :)"<<endl;
    }else if(num==7){
        cout<<"Suterday :)"<<endl;
    }else{
        cout<<"enterd number is invilid ";
    }
}