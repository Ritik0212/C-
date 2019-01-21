#include<iostream>
using namespace std;
main(){
	int n1, n2,i;
	cout<<"input range"<<"\n";
	cin>>n1>>n2;
	int arr[8]={3,4,3,4,5,6,4,7};
	int arr1[n2+1];
	for(i=0;i<n2+1;i++){
		arr1[i]=0;
	}
	for(i=0;i<8;i++){
		arr1[arr[i]]++;
	}
	for(i=1;i<n2+1;i++){
		for(int j=0;j<arr1[i];j++){
			cout<<i<<"\t";
		}
	}
}
