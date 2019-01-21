#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int counter=0;
		while(n!=0){
			if(n%10==4)
			counter++;
			n/=10;
		}
		cout<<counter<<"\n";
	}
}
