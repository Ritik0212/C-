#include<iostream>
using namespace std;
int main(){
	int t,x,i;
	cin>>t;
	int n[t];
	for(i=0;i<t;i++){
		cin>>n[i];
	}
	for(i=0;i<t;i++){
		x=n[i];
		x=x*(x-1)/2;
		
		cout<<x<<"\n";
	}
	
}
