#include<iostream>
#include<string>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	string gesture;
	while(t--){
		cin>>n;
		cin>>gesture;
		int flag=0;
		for(int i=0;i<gesture.length();i++){
			if(gesture[i]==	'Y'){
				flag=1;
				cout<<"NOT INDIAN\n";
				break;
			}
			else if(gesture[i]=='I'){
				flag=1;
				cout<<"INDIAN\n";
				break;
			}
		}
		if(flag==0) cout<<"NOT SURE\n";
	}
}
