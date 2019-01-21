#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,s;
		cin>>n>>k>>s;
		int nOs=s/7;
		int Tosurvive = k*s;
		int maxChoco = (s-nOs)*n;
		if(maxChoco<Tosurvive)
		cout<<-1<<"\n";
		else{
			if(Tosurvive%n==0)
			cout<<Tosurvive/n<<"\n";
			else cout<<Tosurvive/n+1<<"\n";
		}
}
}
