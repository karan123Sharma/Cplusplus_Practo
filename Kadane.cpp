#include<iostream>
using namespace std;

int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     int curr = 0;
     int maxTillNow = 0;
        for(int i=0;i<n;i++){
           curr =arr[i];
           maxTillNow = max(curr,maxTillNow);
        if(curr<0){
             curr=0;
        }
    }
 }
