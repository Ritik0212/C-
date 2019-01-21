#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
int main(){
	std::string a;
	while(std::getline(std::cin,a))
	{
		
		int ta=0,tb=0,cla=5,clb=5;
		for(int i=0;i<=9;i++){
			if(i%2==0)
			cla--;
			if(i%2==1)
			clb--;
			if(a[i]=='1' && i%2==1)
			tb++;
			if(a[i]=='1' && i%2==0)
			ta++;
			if(tb>ta+cla){
				cout<<"TEAM-B"<<" "<<i+1<<"\n";
				break;
			}
			if(ta>tb+clb){
				cout<<"TEAM-A"<<" "<<i+1<<"\n";
				break;
			}
		}
		if(ta==tb){
		
		int j=10;
		while(a[j]==a[j+1] && j<=18){
			j=j+2;
		}
		if(j!=20){
			if(a[j]=='1'){
				cout<<"TEAM-A"<<" "<<j+2<<"\n";
			}
			if(a[j+1]=='1'){
				cout<<"TEAM-B"<<" "<<j+2<<"\n";
			}
		}
		else cout<<"TIE"<<"\n";}
}
}
