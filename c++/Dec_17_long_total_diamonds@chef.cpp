#include<iostream>
#include<math.h>
using namespace std;
int diffOfEO(long a,long long e,long long o){
	e=0;
	o=0;
	while(a!=0i){
		int p=(a%10)%2;
		if(p==0)
			 e+=a%10;
		else
			o+=a%10;
		a/=10;
	}
	return abs(e-o);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,d=0,diff,sed,sod;
		cin>>n;
			for(int j=1;j<=n-1;j++){
				long long gol=n+1-j;
				long long maal=n+1+j;
				long long temp=gol;
				
				diff=diffOfEO(temp,sed,sod);
				diff*=n-j;
				d+=diff;
				temp=maal;
				
				diff=diffOfEO(temp,sed,sod);
				diff*=n-j;
				d+=diff;
			}
			long long per=n+1;
			long long temp=per;
				
				diff=diffOfEO(temp,sed,sod);
				diff*=n;
				d+=diff;
		cout<<d<<"\n";
	}
}
