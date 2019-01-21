#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int temp=n,i=0;
		while(temp!=0){
			temp/=10;
			i++;
		}
		cout<<(n%10)+(int)(n/(pow(10,i-1)))<<"\n";
	}
}
