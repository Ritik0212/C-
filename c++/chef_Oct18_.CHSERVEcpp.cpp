#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int p1,p2,k;
		cin>>p1>>p2>>k;
		int r = (p1+p2)%k;
		int d = (p1+p2)/k;
		if(d%2==1)
		{
			cout<<"COOK"<<endl;
		}
		else if(d%2==0)
		{
			cout<<"CHEF"<<endl;
		}
	}
}
