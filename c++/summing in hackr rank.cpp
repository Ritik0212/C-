#include<iostream>

using namespace std;
int main(){
	int t,i,term;
	long long n,s,j,m=1000000007;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n;
		s=0;
		for(j=1;j<=n;j++){
			term=(j%m)*2-1;
			s=(s%m)+term;
		}
		cout<<s<<"\n";
	}
}
