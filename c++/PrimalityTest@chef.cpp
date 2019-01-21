#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long t,n;
	float m;
	cin>>t;
	while(t--){
		cin>>n;
		m=sqrt(n);
		int flag=1;
		for(long long i=2;i<=m;i++){
			if (n%i==0){
				flag=0;
				break;
			}
		}
		if(flag==1) cout<<"yes\n";
		else cout<<"no\n";
	}
}
