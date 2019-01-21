#include<iostream>
using namespace std;
int main(){
	int t,i,n,j,count,count1=0,k,prod=1,arr[20]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71};
	cin>>t;
	for(k=0;k<t;k++){
		cin>>n;
		for(i=0;i<20 && prod<n;i++)
	
		{
			prod=prod*arr[i];
			count++;
		}
		
		
		
	}
	cout<<count;
}
