#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t,r,c[2],h[2],s[2];
	float ch,cs,hs;
	cin>>t ;
	while(t--){
		cin>>r;
		cin>>c[0]>>c[1];
		cin>>h[0]>>h[1];
		cin>>s[0]>>s[1];
		ch=sqrt(pow(c[0]-h[0],2)+pow(c[1]-h[1],2));
		cs=sqrt(pow(c[0]-s[0],2)+pow(c[1]-s[1],2));
		hs=sqrt(pow(h[0]-s[0],2)+pow(h[1]-s[1],2));
		if((ch<=r && cs<=r) || (ch<=r && hs<=r) || (cs<=r && hs<=r))
		cout<<"yes\n";
		else cout<<"no\n";
	}
}
