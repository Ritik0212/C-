#include <bits/stdc++.h>
using namespace std;

int max(int a , int b)
{
	return (a>b)? a:b;
}

int maxpathsum(int n, int tree[], int i, int &res ){
	if(2*i+1 > n-1 && 2*i+2 > n-1)
	return tree[i];
	
	int ls = maxpathsum(n, tree , 2*i+1, res);
	int rs = maxpathsum(n, tree, 2*i+2, res);
	
	if(2*i+1 < n && 2*i+2 < n)
	{
		res = max(res, ls+rs+tree[i]);
		
		return max(ls,rs) + tree[i];
	}
	
	return (2*i+1 > n-1)? rs+tree[i] : ls+tree[i];
}
int maxutil(int n, int arr[] )
{
    int res = INT_MIN;
    maxpathsum(n,arr,0,res);
    return res;
}


int main(){
	int n = 7;
	int arr[] = {-15,5,6,-8,1,3,9,2,6,0};
	cout<<maxutil(n,arr);
}
