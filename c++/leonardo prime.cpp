#include<iostream>
using namespace std;
int main(){
	long long t,i=0,n,j,p=1,k,arr[20]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71};
	cin>>t;
	for(k=0;k<t;k++){
		cin>>n;
		while(p<=n){
			p*=arr[i];
			i++;
		}
		cout<<i-1<<"\n";
	}
			
	}
