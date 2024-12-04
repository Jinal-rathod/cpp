// Write a program to check whether a triangle is valid based on the sum of its angle.

#include<iostream>
using namespace std;

int main(){
    int f_a,s_a,t_a;
    cin>>f_a>>s_a>>t_a;
    int sum = f_a + s_a + t_a;
    if(sum==180){
        cout<<"Triangle is valid.."<<endl;
    }else{
        cout<<"It is not triangle.."<<endl;
    }
}