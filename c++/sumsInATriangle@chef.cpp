#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				cin>>arr[i][j];
			}
		}	
	}
}
