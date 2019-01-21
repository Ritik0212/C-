#include <bits/stdc++.h>

using namespace std;
 
int SieveOfEratosthenes(int m, int n)
{
    int c=0;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    for (int p=m; p<=n; p++)
       if (prime[p])
          c++;
    return c;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>m>>n;
	    if(m!=1)
	    {
	    	cout<<fixed<<setprecision(6)<<(float)SieveOfEratosthenes(m,n)/(n-m+1)<<"\n";
	    }
	    else cout<<fixed<<setprecision(6)<<(float)(SieveOfEratosthenes(m,n)-1)/(n-m+1)<<"\n";
	}
    return 0;
}
