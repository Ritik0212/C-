#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int t;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		int i,l=0,a=0,b=0,e=0;
		while(s[l]=='.'){
			l++;
		}
		char k=s[l];
		for(i=l;i<s.length();i++){
		if(s[i]!='.'){
			if(s[i]==k){
				if(s[i]=='A'){
					a++;
					a+=e;
					e=0;
					k=s[i];
				}
				else{
					b++;
					b+=e;
					e=0;
					k=s[i];
				}
			}
			else{
				if(s[i]=='A'){
					a++;
					e=0;
					k=s[i];
				}
				else{
					b++;
					e=0;
					k=s[i];
				}
			}
		}
		else e++;
	}
	cout<<a<<" "<<b<<"\n";
	}
}
