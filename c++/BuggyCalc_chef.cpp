#include<iostream>
#include<math.h>
using namespace std;
int lenOfInt(int n);
int main()
{	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		int a,b;
		cin>>a>>b;
		int l = (lenOfInt(a)>lenOfInt(b))? lenOfInt(a):lenOfInt(b);
		int c[l];
		for(int j=0; j<l; j++){
			c[j]=((a%10)+(b%10))%10;
			a = a/10;
			b = b/10;
		}
		int ans=0;
		for(int j=0; j<l; j++){
			ans = ans + c[j]*(pow(10,j));
		}
		cout<<ans<<"\n";
	}
}

int lenOfInt(int n){
	int l = floor(log10(n))+1;
	return l;
}
