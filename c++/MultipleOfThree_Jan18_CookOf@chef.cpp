#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long k,d0,d1;
		cin>>k>>d0>>d1;
		int d[1000],a;
		d[0]=d0;d[1]=d1;
		int sum=d0+d1,OOF,OOK,i;
		for(i=2;i<1000;i++){
			d[i]=sum%10;
			sum+=d[i];
			if(d[i]==0)
			break;
			if(d[i]==2 || d[i]==4 || d[i]==6 || d[i]==8){
				OOF=d[i];
				OOK=i;
				break;
			}
		}
		if(d[i]==0){
			if(sum%3==0)
			cout<<"YES\n";
			else cout<<"NO\n";
		}
		else{
		
			long long ab=k-OOK;
			sum=sum-OOF;
			if((ab/4)%3==1)
			a=2;
			else if((ab/4)%3==2)
			a=1;
			else if((ab/4)%3==0)
			a=0;
			int b=0;
			if(OOF==2){
				if(ab%4==1)
				b=2;
				if(ab%4==2)
				b=6;
				if(ab%4==3)
				b=14;
			}
			if(OOF==4){
				if(ab%4==1)
				b=4;
				if(ab%4==2)
				b=12;
				if(ab%4==3)
				b=18;
			}
			if(OOF==8){
				if(ab%4==1)
				b=8;
				if(ab%4==2)
				b=14;
				if(ab%4==3)
				b=16;
			}
			if(OOF==6){
				if(ab%4==1)
				b=6;
				if(ab%4==2)
				b=8;
				if(ab%4==3)
				b=12;
			}
			if((sum+a+b)%3==0)
			cout<<"YES\n";
			else
			cout<<"NO\n";
	    }
	}
}
