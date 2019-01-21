#include<iostream>
using namespace std;
char arr[10000000];
int main(){
	int t;
	cin>>t;
	while(t--){
		long n,x;
		cin>>x>>n;
		for(int i=0;i<n;i++){
			arr[i]='0';
		}
		long long sum=n*(n+1)/2;
		sum=sum-x;
		if((sum%2==1) || n<=3){
			cout<<"impossible\n";
		}
		else{
			int j=n;
			sum=sum/2;
			while(sum){
				if(sum>=j){
					if(sum-j!=x && j!=x){
						sum=sum-j;
						arr[j-1]='1';
						j--;
					}
					else{
						j--;
					}
				}
				else{
					arr[sum-1]='1';
					sum=0;
				}
			}
			arr[x-1]='2';
			for(int k=0;k<n;k++){
				cout<<arr[k];
			}
			cout<<"\n";
		}
	}

}
