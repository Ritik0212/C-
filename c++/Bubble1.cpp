#include<stdio.h>
#include<conio.h>
#include<time.h>
void swap(int *,int *);
main(){
	clock_t t;
	double diff;
	int arr[]={22,50,10,15,99},i,j;
	t =clock();
	for(int i=0;i<4;i++){
		for(j=0;j<4-i;j++){
			if(arr[j]>arr[j+1]){
			swap(&arr[j],&arr[j+1]);
			}	
		}
		
	}
	for(int k=0;k<5;k++){
		printf("%d\n",arr[k]);
	}
	t=clock()-t;
	diff=(double)t/CLOCKS_PER_SEC;
	printf("%lf",diff);
}
void swap(int *a,int *b){
	
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}

