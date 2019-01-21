#include<iostream>
using namespace std;
 long long int fact(int x);
int main(){
	long long m=1000000000,x;
	int t,n,i,r;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n;
		for(r=0;r<=n;r++){
		x=(fact(n)%m/((fact(r)%m)*(fact(n-r)%m)))%m;
		cout<<x<<"\t";
		}
		cout<<"\n";
		
	}
}
 long long int fact( int x)
   {
     long long int f=1;
     int i;
     for(i=1;i<=x;i++)
       f=f*i;
     return(f);
   }
