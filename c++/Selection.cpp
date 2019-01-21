#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
main(){
	int arr[5]={22,50,10,15,99},i,j,k,m,smallest;
	for(j=0;j<4;j++){
		smallest=arr[j];
		for(i=j+1;i<5;i++){
			if(smallest>arr[i]){
				smallest=arr[i];
				k=i;
			}
		}
		if(arr[k]<arr[j])
		swap(&arr[k],&arr[j]);
	}
	for(m=0;m<5;m++){
		printf("%d\n",arr[m]);
	}
}
void swap(int *a,int *b){
	
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
