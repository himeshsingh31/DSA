#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
void power(int p){
       int  ans;
    if(p==0){
        cout<<ans<<endl;
        return;
    }
    ans = power(p-1)*2;

}
int main(){

cout<<"enter the number you want to see the power of 2"<<endl;
int *x = new int;
cin>>*x;
power(*x);


}