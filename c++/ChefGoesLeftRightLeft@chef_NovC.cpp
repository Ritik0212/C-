#include<iostream>
using namespace std;
int smallest(int arr[], int n){
	int s=arr[0];
	for(int i=1;i<n;i++){
		if (arr[i]<s)
		s=arr[i];
	}
	return s;
}
int largest(int arr[], int n){
	int s=arr[0];
	for(int i=1;i<n;i++){
		if (arr[i]>s)
		s=arr[i];
	}
	return s;
}
int main(){
	int t,n,r,i;
	cin>>t;
	while(t--){
		cin>>n>>r;
		int arr[n];
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		int rightmin=largest(arr,n);
		int leftmax=smallest(arr,n);
		for(i=0;i<n;i++){
			if(arr[i]>=r && arr[i]<=rightmin)
			rightmin = arr[i];
			else if(arr[i]<=r && arr[i]>=leftmax)
			leftmax = arr[i];
			else{
				cout<<"NO\n";
				break;
			}
		}
		if (i==n)
		cout<<"YES\n";
	}
}
