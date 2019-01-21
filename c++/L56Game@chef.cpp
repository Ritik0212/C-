#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n],nodd=0,neven=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]%2==1)
			nodd++;
		}
		if(n!=1){
		
			if(nodd%2==0)
			cout<<1<<"\n";
			else
			cout<<2<<"\n";
		}
		else cout<<1<<"\n";
	}
}
