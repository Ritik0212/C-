#include<iostream>
using namespace std;
int m=1000000007;
int arr[200000]={0};
int T(int n,int k){
	if(n<=k)
	return 1;
	else{
		int sum=0;
		if(arr[n]==0){
		
		for(int i=1;i<=k;i++){
			arr[n]=(arr[n]+T(n-i,k));
			arr[n]%=m;
		}}
		return arr[n];
	}
}
int main(){
	int n,k;
	cin>>n>>k;
	cout<<T(n,k);
}
