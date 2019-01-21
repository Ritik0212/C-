#include<iostream>
using namespace std;
bool isEven(long long a[],long long d[],long long i,long long c){
	if(i==0){
		return ((a[i]*c+d[i])%2==0);
	}
	else{
		return(((d[i]%2==0)&&(a[i]%2==0 || isEven(a,d,i-1,c)==true)) || ((d[i]%2==1)&&(a[i]%2==1 && isEven(a,d,i-1,c)==false)));
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,minX,maxX;
		cin>>n>>minX>>maxX;
		long long total=maxX-minX+1;
		long long w[n],b[n];
		for(int i=0;i<n;i++){
			cin>>w[i]>>b[i];
		}
		int flag=0;	//flag=0 means prod of w's is odd and flag=1 vice-versa
		for(int j=0;j<n;j++){
			if(w[j]%2==0){
				flag=1;
				break;
			}
		}
		long long temp=minX;
		int f=isEven(w,b,n-1,minX);
		if((f==1 && flag==1))
		cout<<total<<" "<<0<<"\n";
		if(f==0 && flag==1)
		cout<<0<<" "<<total<<"\n";
		if(f==0 && flag==0){
			if(total%2==0)
			cout<<total/2<<" "<<total/2<<"\n";
			else cout<<total/2<<" "<<total/2+1<<"\n";
		}
		if(f==1 && flag==0){
			if(total%2==0)
			cout<<total/2<<" "<<total/2<<"\n";
			else cout<<total/2+1<<" "<<total/2<<"\n";
		}
		
	}
}
