#include<iostream>
#include<algorithm>
using namespace std;
#define b 10000000000
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long a[n][n],i,j;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		long long sum=0,flag=1;
		long long lastmax=b;
		for(i=n-1;i>=0;i--){
			std::sort(a[i],a[i]+n);
			j=n;
			if(a[i][0]<lastmax){
				while(j--){
					if(a[i][j]<lastmax){
						sum+=a[i][j];
						lastmax=a[i][j];
						break;
					}
				}	
			}
			else {
				flag=0;
				break;
			}
		}
		if(flag==0)
		cout<<-1<<"\n";
		else
		cout<<sum<<"\n";
		
}}
