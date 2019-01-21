#include<iostream>
using namespace std;
int find(int,int);
int max(int,int);
int main(){
	int e=2,f=100;
	cout<<find(f,e);
}
int find(int k, int n)
{
	int  mint = 10000;
	if (k<1 || n<1)
		{
			return 0;
		}
	if (k==1)
		{
			return 1;
		}
		if(n==1)
		{
			return k;
		}
	for(int i=1;i<=k;i++)
	{
			
		mint = min(mint,max(find(i-1,n-1),find(k-i,n)));
		
	}
	return mint+1;
}
int max(int a , int b)
{
	return ((a>b)? a:b);	
}
