#include<iostream>
using namespace std;
int find(int,int);
int max(int,int);
int main(){
	int e=2,f=1000;
	cout<<find(f,e);
}
int find(int k, int n)
{
	int  drops[k+1][n+1];
	
	
	for(int i=1;i<n+1;i++)
	{
		drops[0][i] = 0;
		drops[1][i] = 1;
		drops[i][0] = 0;
	}
	for(int i=1;i<k+1;i++)
	{
		drops[i][1] = i;
	}	
	for(int j=2;j<n+1;j++)
	{
		for(int i=2;i<k+1;i++)
		{
			drops[i][j] = 10000;
			for(int l=1;l<i+1;l++)
			{	
				drops[i][j] = min(1 + max(drops[l-1][j-1],drops[i-l][j]),drops[i][j]);
			}
		}
	}
	return drops[k][n];
}
int max(int a , int b)
{
	return ((a>b)? a:b);	
}
