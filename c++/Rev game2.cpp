#include<iostream>
using namespace std;
int main(){
	int t,n,k,i,j,l,p,temp,temp1;
	cin>>t;
	for(p=0;p<t;p++){
		cin>>n;
		cin>>l;
		int arr[n];
		for(j=0;j<n;j++){
			arr[j]=j;
		}
		temp=arr[n-1];
		temp1=0;
		for(i=0;i<n;i=i+2){
			arr[i]=temp--;
		}
		for(i=1;i<n;i=i+2){
			arr[i]=temp1++;
		}
		int m=0;
		while(arr[m]!=l){
			m++;
		}
		cout<<m<<"\n";
	}
}
