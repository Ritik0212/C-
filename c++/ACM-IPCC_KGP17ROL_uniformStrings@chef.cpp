#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int size=7,i=1,count=0;
		while(size--){
			if(s[i]!=s[i-1]){
				count++;
			}
			i++;
		}
		if(s[0]!=s[7]){
			count++;
		}
		if(count<=2)
		cout<<"uniform\n";
		else
		cout<<"non-uniform\n";
	}
}
