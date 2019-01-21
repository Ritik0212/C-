#include<iostream>
using namespace std;
int main(){
	int t,n,remainder,reversedNumber,temp;
	cin>>t;
	while(t--){
		cin>>n;
		temp=n;
		reversedNumber=0;
		while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    if(reversedNumber==temp) cout<<"wins\n";
    else cout<<"losses\n";
	}
}
