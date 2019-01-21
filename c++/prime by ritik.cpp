#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,i,n,j,count,count1=0,k,prod=1;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n>=2)
		cout<<2<<"\n";
		for(i=3;i<=n;i=i+2)
		{	count=0;
			for(j=1;j<=sqrt(i);j++)
			{
				if(i%j==0)
					count++;
				if(count>1)
				{
					break;
				}
			}
			if (count==1)
			{
				cout<<i<<"\n";
			}
		}
	}
}
