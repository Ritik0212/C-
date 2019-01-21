#include<iostream>
#include<math.h>
 using namespace std;
 int main(){
 	int T,d;
 	double v,s,sg,fg,t,temp;
 	cin>>T;
 	while(T--){
 		cin>>s>>sg>>fg>>d>>t;
 		temp = (double)d*180/t;
 		v=(double)(temp)+(double)s;
 		double sd = (sg-v>0)? (sg-v):(v-sg);
 		double fd = (fg-v>0)? (fg-v):(v-fg);
 		
 		if (sd<fd)
 		cout<<"SEBI"<<"\n";
 		else if(sd>fd)
 		cout<<"FATHER"<<"\n";
 		else cout<<"DRAW"<<"\n";
 	}
 }			
