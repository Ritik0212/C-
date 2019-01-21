#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int binaryNum[1000];

	    int i = 0;
	    while (n > 0) {
	        binaryNum[i] = n % 2;
	        n = n / 2;
	        i++;
    	}
    	int sum=0;
    	for(int j=i-1;j>=0;j--){
    		for(int k=j-1;k>=0;k--){
    			if(binaryNum[j]==1 && binaryNum[k]==1)
    			sum+=3;
    			if(binaryNum[j]==1 && binaryNum[k]==0)
    			sum+=2;
    			if(binaryNum[j]==0 && binaryNum[k]==1)
    			sum+=1;
    		}
    	}
    	cout<<sum<<"\n";
	}
}
