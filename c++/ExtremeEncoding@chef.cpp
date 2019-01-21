#include<iostream>
#include<math.h>
using namespace std;
int decToBinary(int n,int binaryNum[])
{
    
 
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    return i;
}

 int main(){
 	int t,n;
 	cin>>t;
 	int t1 = t;
 	while(t--){
 		cin>>n;
 		int arr[n],bnc[40],arr1[n],arr2[n];
 		for(int i=0; i<n; i++){
 			cin>>arr[i];
 			arr1[i]=0;arr2[i]=0;
			int binaryNum[40];
 			int h=decToBinary(arr[i],binaryNum);
 			int limit_a = h>16?16:h;
 			for(int l=0;l<limit_a;l++){
 				arr1[i]+=binaryNum[l]*(pow(2,l));
 			}
 			for(int l=16;l<h;l++){
 				arr2[i]+=binaryNum[l]*(pow(2,(l-16)));
 			}
 			
 		}
 		cout<<"Case "<<t1-t<<":\n";
 		for(int a=0;a<n;a++){
 			cout<<arr1[a]<<" ";
 		}
 		cout<<"\n";
 		for(int a=0;a<n;a++){
 			cout<<arr2[a]<<" ";
 		}
 		cout<<"\n";
 		
}}
