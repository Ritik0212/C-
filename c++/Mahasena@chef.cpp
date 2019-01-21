#include<iostream>
using namespace std;
int main(){
	int n,count=0,count1=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]%2==0)
		count++;
		else
		count1++;
	}
	if(count>count1)
	cout<<"READY FOR BATTLE\n";
	else
	cout<<"NOT READY\n"; 
}
