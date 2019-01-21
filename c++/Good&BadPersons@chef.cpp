#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,n1=0,n2=0;
		cin>>n>>k;
		char s[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
			if(int(s[i])>=65 && s[i]<=90)
			n1++;
			else
			n2++;
		}
		if(n1>n2){
			if(k<n2)
			cout<<"none\n";
			if(k>=n2 && k<n1)
			cout<<"brother\n";
			if(k>=n1)
			cout<<"both\n";
		}
		else if(n1<n2){
			if(k<n1)
			cout<<"none\n";
			if(k>=n1 && k<n2)
			cout<<"chef\n";
			if(k>=n2)
			cout<<"both\n";
		}
		else if(n1==n2){
			if(k<n1)
			cout<<"none\n";
			else
			cout<<"both\n";
		}
	}
}
