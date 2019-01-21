#include<iostream>
using namespace std;
int main(){
	int i,t,j;
	long x,y,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>t;
	for(j=0;j<t;j++){
		cin>>x;
		cin>>y;
		if(arr[x-1]%2==0&& arr[y-1]!=0)
		cout<<"Even\n";
		else
		cout<<"Odd\n";
	}
}
