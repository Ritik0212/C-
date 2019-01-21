#include<iostream>
 using namespace std;
 int main(){
 	int n,k,l=0;
 	cin>>n>>k;
 	int t[n];
 	for(int i=0; i<n; i++){
 		cin>>t[i];
 		if (t[i]%k==0)
 		l++;
 	}
 	cout<<l;
 }
