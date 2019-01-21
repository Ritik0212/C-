#include<iostream>
 using namespace std;
 long gcd(long a, long b)
{
    while(a!=b)
    {   if(a==1 || b==1)    return 1;
        else if(a==0)   return b;
        else if(b==0)   return a;
        else    (a>b)?(a %= b):(b %= a);
    }
    
    return a;
}
 
long lcm(long a, long b)
{
    return (a*b)/gcd(a, b);
}
 
  int main(){
  	long t,n,c;
  	cin>>t;
  	while(t--){
  		cin>>n;
  		long A[n];
  		for(int i=0; i<n; i++){
  			cin>>A[i];
  		}
  		long min = lcm(A[0],A[1]);
  		for (int i=0; i<n-1; i++){
  			for(int j=i+1; j<n; j++){
  				c = lcm(A[i],A[j]);
  				if (c<min)
  				min = c;
  			}
  		}
  		cout<<min<<endl;
  	}
  }
