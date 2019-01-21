#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
	long double s1,s2,l,q,t,d,rs,oa;
	cin>>l>>s1>>s2;
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>oa;
		rs=fabs(s2-s1);
		d=((sqrt(2.0)*l)-sqrt(2.0*oa));
		t=d/rs;
		cout<<setprecision (40)<<t<<"\n";
	}
	
}
