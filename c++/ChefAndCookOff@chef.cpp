#include<iostream>
#include<bits/stdc++.h>
 using namespace std;
 int main(){
	int t,n,k;
	cin>>t;
	for (int i=0; i<t; i++){
		cin>>n;
		string 	k;
		int cw=0,sim=0,es=0,em=0,mh=0;
		for (int j=0; j<n; j++){
			cin>>k;
			if (k=="cakewalk")
			cw++;
			else if(k=="simple")
			sim++;
			else if(k=="easy")
			es++;
			else if(k=="easy-medium"||k=="medium")
			em++;
			else
			mh++;
		}
		if(cw>=1 && sim>=1 && es>=1 && em>=1 && mh>=1)
		cout<<"Yes"<<"\n";
		else
		cout<<"No"<<"\n";
	}
	}
	
