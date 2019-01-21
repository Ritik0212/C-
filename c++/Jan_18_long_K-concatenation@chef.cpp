#include<iostream>
#include<climits>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			
		}
		int count =0,max=-10000000;
		for(int i=0;i<n;i++){
			if(a[i]<0){
				count++;
				if(max<a[i])
				max=a[i];
			}
			else break;
		}
		if(count==n) cout<<max<<"\n";
		else{
			long long max_so_far=0;
			long long max_ending_here=0;
			while(k--){
				for(int j=0;j<n;j++){
					max_ending_here+=a[j];
					if(max_so_far<max_ending_here)max_so_far=max_ending_here;
					if(max_ending_here<0)max_ending_here=0;
				}
			}
			cout<<max_so_far<<"\n";
		}
	}
}
