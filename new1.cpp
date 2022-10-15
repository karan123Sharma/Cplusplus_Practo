#include <iostream>
using namespace std;
int main() {
	int a,b;
	cin>>a;
    int n;
    int sum=0;
    cin>>n;
	int arr[n];
    int count=0;
	while(a--){
	    cin>>b;
	    for(int i=0;i<b;i++){
	        cin>>arr[i];
	    }
        int first = arr[0];
        for(int i=0;i<b;i++){
            if(arr[i]!=first){
               arr[i]=first;
               count++;
            }   
        }
       cout<<count<<endl;
       count=0;
	}
}