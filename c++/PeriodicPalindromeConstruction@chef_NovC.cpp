#include<iostream>
using namespace std;
int main(){
	int t,n,p;
	cin>>t;
	while(t--){
		cin>>n>>p;
		if(p!=1 && p!=2){
			if(n%p==0){
				int a =n/p;
				while(a--){
					if(p%2!=0){
						for(int j=1;j<=p/2;j++){
							cout<<"ab";
						}
						cout<<"a";
					}
					else{
						int b=(p-2)/2;
						while(b--){
							cout<<"a";
						}
						cout<<"bb";
						b=(p-2)/2;
						while(b--){
							cout<<"a";
						}
					}
				}
				cout<<"\n";
			}
			else cout<<"impossible\n";
		}
		else cout<<"impossible\n";
	}
}
