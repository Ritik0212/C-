#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int temp=n,i=0;
		while(temp%10==0){
			temp/=10;
		}
		while(temp!=0){
			cout<<temp%10;
			temp/=10;
		}
		
		cout<<"\n";
	}
}
