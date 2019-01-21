#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t,n,r,i,count;
	cin>>t;
	for(i=0;i<t;i++){
		count =0;
		cin>>n;
		for(int j=2;j<=n/2;j=j+2){
			if(n%j==0){
			
				if(j%2==0){
				count++;
				}
			}
		}
		if(n%2==0)
		cout<<count+1<<"\n";
		else
		cout<<count<<"\n";
	}
}
