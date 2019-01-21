#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,temp;
		cin>>n;
		
		
			if(n%2==0){
				temp=n/2-1;
				}
			else{
				temp=(n-1)/2-1;
			}
			cout<<temp*(temp+1)/2<<"\n";
	}
}
