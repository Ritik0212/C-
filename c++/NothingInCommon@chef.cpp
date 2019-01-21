#include<iostream>
 using namespace std;
 int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
 
        // If the element is present at the middle itself
        if (arr[mid] == x)  return mid;
 
        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
 
        // Else the element can only be present in right subarray
        return binarySearch(arr, mid+1, r, x);
   }
 
   // We reach here when element is not present in array
   return -1;
}
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

 int main(){
 	int t,n,m;
 	cin>>t;
 	while(t--){
 		cin>>n>>m;
 		int arr1[n],arr2[m],count=0;
 		for(int i=0; i<n; i++){
 			cin>>arr1[i];
 		}
 		quickSort(arr1, 0, n-1);
 		for(int i=0; i<m; i++){
 			cin>>arr2[i];
 		}
 		quickSort(arr2, 0, m-1);
 		for(int j=0;j<n;j++){
 			int found,l=0;
 			found = binarySearch( arr2, 0, (m-1), arr1[j]);
 				if (found!=-1)
 				count++;
 			
 		}
 		cout<<count<<"\n";
 	}
 }
