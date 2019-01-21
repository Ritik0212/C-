#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int temp=n,dis1=0,dis2=0,dis3=0,c1=0,c2=0,c3=0;
		while(temp--){
			int c,l,x;
			cin>>c>>l>>x;
			if(l==1){
				if(x>dis1){
					dis1=x;
					c1=c;
				}
				else if(x==dis1){
					if(c<c1)
					c1=c;
				}
			}
			if(l==2){
				if(x>dis2){
					dis2=x;
					c2=c;
				}
				else if(x==dis2){
					if(c<c2)
					c2=c;
				}
			}
			if(l==3){
				if(x>dis3){
					dis3=x;
					c3=c;
				}
				else if(x==dis3){
					if(c<c3)
					c3=c;
				}
			}
		}
		cout<<dis1<<" "<<c1<<"\n";
		cout<<dis2<<" "<<c2<<"\n";
		cout<<dis3<<" "<<c3<<"\n";
	}
}
