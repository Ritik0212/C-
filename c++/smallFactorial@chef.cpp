#include<iostream>
 using namespace std;
 int arraySize(int arr[],int s){
 	int i;
 	for(i=0;i<s;i++){
 		if(arr[i]==-1){
 			return i;
 		}
 	}
 	return s;
 }
 int main(){
 	int t,n,i;
 	cin>>t;
 	while(t--){
 		cin>>n;
 		int arr[200],temp=0;
 		for(int f=0;f<200;f++){
 			arr[f]=-1;
 		}
 		arr[0]=1;
 		for(int j=1;j<=n;j++){
 				int temp=0;
 				int y=arraySize(arr,200);
 			for(i=0;i<y;i++){
 					int x;
 					x=arr[i]*j+temp;
 					arr[i]=x%10;
 					temp=x/10;
 			}
 			while(temp!=0){
 				arr[i]=temp%10;
 				temp/=10;
 				i++;
 			}
		}
		for(int k=i-1;k>=0;k--){
			cout<<arr[k];
		}
		cout<<"\n";
 	}
 }
