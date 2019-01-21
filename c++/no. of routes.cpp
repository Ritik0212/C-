#include<iostream>
using namespace std;
int main(){
	int t,i,j;
	cin>>t;
	int c[t];
	long x[t],m=1234567;
	for(i=0;i<t;i++){
		cin>>c[i];
		int r[c[i]-1];
		x[i]=1;
		for(j=0;j<c[i]-1;j++){
			cin>>r[j];
			x[i]=(long)((x[i]%m)*(r[j]%m))%m;
		}
		
	}
	for(i=0;i<t;i++)
	cout<<x[i]<<"\n";
}
