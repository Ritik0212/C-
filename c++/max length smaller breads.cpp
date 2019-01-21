#include<iostream>
using namespace std;
int main(){
	int t,i,x,l,b,j,y;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>l;
		cin>>b;
		for(j=1;j<=l&&j<=b;j++){
			if(l%j==0&&b%j==0)
			x=j;
		}
		y=l*b/(x*x);
		cout<<y<<"\n";
	}
	
}
