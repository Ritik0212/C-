#include<iostream>
#include<math.h>
using namespace std;
int binomialCoeff(int n, int k)
{
    int res = 1;
 
    // Since C(n, k) = C(n, n-k)
    if ( k > n - k )
        k = n - k;
 
    // Calculate value of [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
 
    return res;
}
int power(int x, int y, int p)
{
    int res = 1;      // Initialize result
 
    x = x % p;  // Update x if it is more than or 
                // equal to p
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;  
    }
    return res;
}
int main(){
	int k,a,p,q,l,d,t,dcl;
	cin>>k>>a>>p>>q;
	a=a%p;
	while(q--){
		cin>>l>>d>>t;
		int sum=0,val1,val2,val3;
		for(int i=d;i<=d+t-1;i++){
		dcl = binomialCoeff(i,l);
		val1 = (a*dcl)%p;
		val2 = power((a+dcl),k-2,p);
		val3 = (val1*val2)%p;
		sum = (sum+val3)%p;
	}
	cout<<sum<<"\n";
	}
}
