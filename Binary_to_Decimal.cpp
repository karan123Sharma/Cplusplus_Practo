#include<iostream>
using namespace std;
int main(){
    int a,rem,base =1 , decimal_num =0 ;
    cin>>a;
    while(a>0){
        rem = a%10;
        decimal_num=decimal_num + rem *base;
        a=a/10;
        base = base * 2;
    }
    cout<<decimal_num<<endl;
}
