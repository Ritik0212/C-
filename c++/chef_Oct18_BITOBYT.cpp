#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t,bitt=2,nt=8,bytt=16;
	cin>>t;
	while(t--)
	{
		long long n,d,r,a=0,b=0,c=0;
		cin>>n;
		d = n/(bitt+nt+bytt);
		r = n%(bitt+nt+bytt);
		long long total = pow(2,d);
		if(r!=0)
		{
			if(r<=2)
			{
				a = total;
			}
			else if(r<=10)
			{
				b = total;
			}
			else
			{
				c = total;
			}
		}
		else
			c = total/2;
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
}
