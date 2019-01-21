#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x1,x2,y1,y2,r1,r2;
		float dbc;
		cin>>x1>>y1>>r1;
		cin>>x2>>y2>>r2;
		dbc=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
		if(dbc>=r1+r2 || (dbc<r1+r2 && dbc>abs(r1-r2)))
		{
			cout<<"NOT SATISFIED\n";
		}
		else 
		{
			if(dbc<=abs(r1-r2) && r1!=r2)
			{
				if(r1>r2)
				cout<<"C1CC2\n";
				else cout<<"C2CC1\n";
			}
			else cout<<"C2~C1\n";
		}
	}
}
