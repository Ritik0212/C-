#include<iostream>
using namespace std;
int main(){
	int t,n,k,i,x;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n;
		cin>>k;
		if(n%2==0)
		x=k+1;
		else
		x=n-k;//n+1-(k+1)
		cout<<x<<"\n";
	}
}
