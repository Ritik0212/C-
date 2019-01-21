#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t,n,arr[]={1,2,5,10,50,100};
	cin>>t;
	while(t--){
		cin>>n;
		int temp=n,i=5,minotes=0;
		while(temp!=0){
			
			while((int)(temp/arr[i])==0 ){
				i--;
			}
			temp-=arr[i];
			minotes++;
			
		}
		cout<<minotes<<"\n";
	}
}
