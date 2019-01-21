#include<iostream>
using namespace std;
int main(){
	int n,q;
	cin>>n;
	long long h[n];
	for(int i=0;i<n;i++){
		cin>>h[i];
	}
	cin>>q;
	while(q--){
		int count=0;
		int x,y;
		cin>>x>>y;
		for(int j=0;j<n;j++){
			int l=j & x;
			if(l==j){
				h[j]-=y;
			}
			if(h[j]>0)
			count++;
		}
		cout<<count<<"\n";
	}
}
