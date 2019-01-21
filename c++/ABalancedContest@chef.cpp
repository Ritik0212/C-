#include<iostream>
using namespace std;

int main(){
	int t,n,p;
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>n>>p;
		int arr[n];
		for(int j=0; j<n; j++){
			cin>>arr[j];
		}
		{	
			int cw=0,hp=0,flag;
			int AtLeast=p/2;
			for(int j=0; j<n; j++){
				if(arr[j]>=p/2){
					cw++;
				}
				else if(arr[j]<=p/10){
					hp++;
				}
				else
				flag=0;
			}
			if(cw==1 && hp==2){
				cout<<"yes"<<"\n";
			}
			else
			cout<<"no"<<"\n";
		}
		
	}
}
