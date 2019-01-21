#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x[n],y[n];
		for(int i=0;i<n;i++){
			cin>>x[i]>>y[i];
		}
		int temp=x[0],count=1,temp1=x[0],l;
		for(l=1;l<n;l++){
			if(x[l]!=temp){
				temp1=x[l];
				count++;
				
				break;
			}
		}
		if(count==1)
		cout<<0<<"\n";
		else{
			for(int k=--l;k<n;k++){
				if(x[k]!=temp && x[k]!=temp1){
					count++;
					break;
				}
			}
		}
		if(count==2)
		cout<<0<<"\n";
		if(count==3){
			
			int x1=-1,y1=0,x2=-2,y2=0,x3=-3,y3=0;
			
			for(int j=0;j<n;j++){
				if(y[j]>=y1){
				 	if(x[j]!=x1 && x[j]!=x2){	//x[j]!=x3 why ??
				 		y3=y2;x3=x2;
				 		y2=y1;x2=x1;
				 		y1=y[j];x1=x[j];
				 	}
				 	else if(x[j]==x1){
				 		y1=y[j];x1=x[j];
				 	}
					else if(x[j]==x2){
						y2=y1;x2=x1;
						y1=y[j];x1=x[j];
					}
				}
				if(y[j]<y1 && y[j]>=y2){
					if(x[j]!=x1 && x[j]!=x2){
						y3=y2;x3=x2;
						y2=y[j];x2=x[j];
					}
					else if(x[j]==x2){
						y2=y[j];x2=x[j];
					}
				}
				if(y[j]<y2 && y[j]>=y3){
					if(x[j]!=x1 && x[j]!=x2){
						y3=y[j];x3=x[j];
					}
				}
			}
			cout<<y1+y2+y3<<"\n";
		}	
	}
}
