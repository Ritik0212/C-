#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
for(int i=0;i<s.length();i++){
	if(s[i]=='*')
	break;
	cout<<s[i];
	
}
cout<<"\n";
}
}
