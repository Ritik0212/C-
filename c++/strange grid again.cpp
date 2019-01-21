#include<iostream>
using namespace std;
int main(){
	int c;
	long r,ans;
	cin>>r;
	cin>>c;
	if(r%2==0)
	ans=(r-2)*5+1+(c-1)*2;
	else
	ans=(r-1)*5+(c-1)*2;
	cout<<ans;
}
