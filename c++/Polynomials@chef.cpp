#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long T,n,q;
	cin>>T;
	while(T--){
		cin>>n;
		int arr[n][4];
		for(int i=0;i<n;i++){
			for(int j=0;j<4;j++){
				cin>>arr[i][j];
			}
		}
		cin>>q;
		for(int i=0;i<q;i++){
			int t;
			cin>>t;
			long long arr1[n],min=pow(10,11);
			for(int i=0;i<n;i++){
				arr1[i]=arr[i][0]+arr[i][1]*t+arr[i][2]*(pow(t,2))+arr[i][3]*(pow(t,3));
				if(arr1[i]<min)
				min = arr1[i];
			}
			cout<<min<<"\n";
		}
	}
}
