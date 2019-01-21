#include<iostream>
#include<math.h>
using namespace std;
int smallest(int arr[], int n)
{
   int i, min=arr[0];
   for (i = 1; i < n; i++)
   {
       if (arr[i]<min)
       min = arr[i];
   }
   return min;
}
int main(){
	int t,n,i,l;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		
		for(l=smallest(arr,n);l>0;l--){
		i=0;
		while(arr[i]%l==0 && i<n){
			i++;
		}
		if(i==n)
		break;
	}
		
			for(int j=0;j<n;j++){
				cout<<(int)(arr[j]/l)<<" ";
			}
			cout<<"\n";
		
}}
