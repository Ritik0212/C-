#include<iostream>
#include<math.h>
using namespace std;
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n],min=1000000,min1=1000000,k;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]<min)
			{
			min = arr[i];
			k=i;
		}
		}
		for(int i=0;i<n;i++){
			if(arr[i]<min1 && arr[i]>=min && i!=k)
			min1 = arr[i];
		}
		
	cout<<min+min1<<"\n";
}}
