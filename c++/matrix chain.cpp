#include<iostream>
using namespace std;
int m(int i,int j){
	int k,s,p;
	if(i=j-1){
		return 1;
	}
	else
	for(k=i;k<j;k++){
	s[k]=m(i,k)+m(k+1,j)+p[i-1]*p[k]*p[j];
	}
}
int main(){
	int n;
	cout<<"Enter no. of matrices\n";
	cin>>n>>"\n";
	int p[n+1],l;
	for(l=0;l<=n;l++){
		cout<<"p[l]:";
		cin>>p[l]>>"\n";
	}
}
