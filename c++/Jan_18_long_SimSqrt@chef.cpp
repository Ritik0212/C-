#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long n,i=4; cin>>n;
	while(n){
		for(long long j=2;j<=sqrt(i);j++){
			if((i%(j*j))==0){
				n--;
				break;
			}
		}
		i++;
	}
	cout<<i-1;
}
