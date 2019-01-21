#include<iostream>
using namespace std;
int main(){
	int t,i,n,j,count,count1=0,k,prod=1;
	cin>>t;
	for(k=0;k<t;k++){
		cin>>n;
		for(i=2;i<=n;i++)
		{
		for(j=1;j<=i;j++){
			if(i%j==0)
			count++;
		
		}
			if (count==2){
				if(prod<n)
				{
				prod=prod*i;
				count1++;}
			} count=0;
		} cout<<count1<<"\n";
		count1=0;
	}} 
