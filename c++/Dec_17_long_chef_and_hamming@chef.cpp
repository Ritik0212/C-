#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		if(n!=1){
		
			cout<<n<<"\n";
			for(int k=0;k<=n-2;k++){
				cout<<arr[k+1]<<" ";
			}
			cout<<arr[0];
			cout<<"\n";
		}
		else{
			cout<<0<<"\n"<<arr[0]<<"\n";
		}
	}
}
