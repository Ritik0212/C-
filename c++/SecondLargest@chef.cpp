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
	int t,arr[3];
	cin>>t;
	while(t--){
		cin>>arr[0]>>arr[1]>>arr[2];
		insertionSort(arr,3);
		cout<<arr[1]<<"\n";
	}
}
