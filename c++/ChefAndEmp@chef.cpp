#include<iostream>
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
	int t,n,k;
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>n>>k;
		int arr[n];
		for(int j=0; j<n; j++){
			cin>>arr[j];
		}
		insertionSort(arr,n);
		cout<<arr[(n+k)/2]<<"\n";
	}
	
}
