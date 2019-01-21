#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int smallest(int x, int y, int z){
    return std::min(std::min(x, y), z);
}
int greatest(int x, int y, int z){
    return std::max(std::max(x, y), z);
}
int minOfsix(int a, int b, int c, int d, int e){
	return std::min(std::min(std::min(std::min(a,b),c),d),e);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,z,a,b,c,min,max,middle,cost[5]={0},sum,xc,yc,zc,minc,maxc,middlec,sumc;
		cin>>x>>y>>z>>a>>b>>c;
		sum=x+y+z;
		min=smallest(x,y,z);
		max=greatest(x,y,z);
		middle=sum-min-max;
		sumc=sum;
		minc=min;
		maxc=max;
		middlec=middle;
		xc=x;yc=y;zc=z;
	
				////////
				x=x-min;
				y=y-min;
				z=z-min;
				cost[0]=cost[0]+c*min;
				min=smallest(x,y,z);
				max=greatest(x,y,z);
				middle=x+y+z-min-max;
				if((x==0 && y==0 && z!=0) || (x==0 && y!=0 && z==0) || (x!=0 && y==0 && z==0)){
					cost[0]+=a*max;
				}
				else if(x==0 && y==0 && z==0){
					
				}
				else{
					cost[0]+=middle*b;
					max=max-middle;
					cost[0]+=max*a;
					
				}
		///////////
		sum=sumc;
		min=minc;
		max=maxc;
		middle=middlec;
		x=xc;y=yc;z=zc;
		
			cost[1]+=middle*b;
			z=max-middle;
			y=0;
			x=min;
			sum=x+y+z;
			min=smallest(x,y,z);
			max=greatest(x,y,z);
			middle=sum-min-max;
			x=min;y=middle;z=max;
			if((x==0 && y==0 && z!=0) || (x==0 && y!=0 && z==0) || (x!=0 && y==0 && z==0)){
					cost[1]+=a*max;
			}
				else if(x==0 && y==0 && z==0){
				
				}
				else{
					cost[1]+=middle*b;
					max=max-middle;
					cost[1]+=max*a;
				}
				///////////
		sum=sumc;
		min=minc;
		max=maxc;
		middle=middlec;
		x=xc;y=yc;z=zc;
		
			x=x-min;
				y=y-min;
				z=z-min;
				cost[2]=cost[2]+c*min;
				min=smallest(x,y,z);
				max=greatest(x,y,z);
				middle=x+y+z-min-max;
				if((x==0 && y==0 && z!=0) || (x==0 && y!=0 && z==0) || (x!=0 && y==0 && z==0)){
					cost[2]+=a*max;
				}
				else if(x==0 && y==0 && z==0){
				}
				else{
					cost[2]+=(max+middle)*a;
				}
		//////////////
		sum=sumc;
		min=minc;
		max=maxc;
		middle=middlec;
		x=xc;y=yc;z=zc;
		
			cost[3]+=middle*b;
			z=max-middle;
			y=0;
			x=min;
			sum=x+y+z;
			min=smallest(x,y,z);
			max=greatest(x,y,z);
			middle=sum-min-max;
			x=min;y=middle;z=max;
			if((x==0 && y==0 && z!=0) || (x==0 && y!=0 && z==0) || (x!=0 && y==0 && z==0)){
					cost[3]+=a*max;
				}
				else if(x==0 && y==0 && z==0){
				}
				else{
					cost[3]+=(max+middle)*a;
				}
		///////////
		sum=sumc;
		min=minc;
		max=maxc;
		middle=middlec;
		x=xc;y=yc;z=zc;
		
			cost[4]+=(x+y+z)*a;
		///////////
		cout<<cost[0]<<" "<<cost[1]<<" "<<cost[2]<<" "<<cost[3]<<" "<<cost[4]<<"\n";
	}
}
