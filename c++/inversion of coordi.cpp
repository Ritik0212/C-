#include<iostream>
using namespace std;
int main()
{
	int n,a[n],px,py,qx,qy,rx,ry,i;
	cin>>n;
	for(i=0;i<=n-1;i++){
		cin>>px>>py;
		
		cin>>qx>>qy;
		
		rx=2*qx-px;
		ry=2*qy-py;
		cout<<rx<<ry<<"\n";
	}
}
