#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a,median;
	    cin>>n;
	    cin>>a;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
     	cout<<arr[(n+a)/2]<<endl;
	}
	return 0;
}
