#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t,p;
	cin>>t;
	while(t--){
		cin>>p;
		int temp=p,i=11,minmen=0;
		while(temp!=0){
			
			while((int)(temp/(pow(2,i)))==0 ){
				i--;
			}
			temp-=pow(2,i);
			minmen++;
			
		}
		cout<<minmen<<"\n";
	}
}
