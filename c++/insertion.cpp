#include<stdio.h>
#include<conio.h>
main(){
	int arr[]={22,50,10,15,99,46,64,78,687,67},i,temp;
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int j=1;j<n;j++){
		i=j;
		temp=arr[j];
		while(temp<arr[i-1]){
			arr[i]=arr[i-1];
			i--;
		}
		arr[i]=temp;
		
	}
	for(int k=0;k<n;k++){
		printf("%d\n",arr[k]);
	}
}
