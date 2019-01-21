#include<iostream>
using namespace std;
 long long int fact(int x);
int main(){
	int t,i;
	long long y,n,m,k=1000000007;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n;
		cin>>m;
		y=((fact(n+m-1)%k)/((fact(n)%k)*(fact(m-1)%k)))%k;
		cout<<y<<"\n";
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
