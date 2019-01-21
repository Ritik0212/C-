#include<iostream>
using namespace std;
void swap(int *a , int *b){
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
int main(){
	int t,n,k,i,j,l,p;
	cin>>t;
	for(p=0;p<t;p++){
		cin>>n;
		cin>>l;
		int arr[n];
		for(j=0;j<n;j++){
			arr[j]=j;
		}
		for(j=0;j<n-1;j++){
		
			for(i=0;i<=(n-j-2)/2;i++){
				swap(&arr[j+i],&arr[n-1-i]);
			}
		}
		int m=0;
		while(arr[m]!=l){
			m++;
		}
		cout<<m<<"\n";
	}
}
