// Write a program to determine the type of triangle based on its sides.

#include<iostream>
using namespace std;

int main(){
    int f_side,s_side,t_side;
    cin>>f_side>>s_side>>t_side;
    int sum = f_side + s_side + t_side;
    if(sum==180){
        cout<<"Triangle is valid.."<<endl;
    }else{
        cout<<"It is not triangle.."<<endl;
    }
}