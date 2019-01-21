#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long k,temp;
		int i=0;
		cin>>k;
		temp=k;
		while(temp>0)
		{
			i++;
			temp-=pow(2,i);
		}
		long long un = k-pow(2,i)+2;
		while(i)
		{
			if(un>pow(2,i-1))
			{
				un-=pow(2,i-1);
				cout<<8;
			}
			else cout<<5;
			i--;
		}
		cout<<"\n";
	}
}
