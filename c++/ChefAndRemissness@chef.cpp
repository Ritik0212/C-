#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		int x = (a>b)? a:b;
		cout<<x<<" "<<a+b<<"\n";
	}
}
