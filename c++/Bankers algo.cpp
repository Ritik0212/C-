#include<iostream>
using namespace std;
main(){
	int i,j;
	int max[3][4]={{3,3,2,2},{1,2,3,4},{1,3,5,0}};
	int alloc[3][4]={{1,2,2,1},{1,0,3,3},{1,2,1,0}};
	int avail[4]={3,1,1,2};
	int need[3][4];
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			need[i][j]=max[i][j]-alloc[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			cout<<need[i][j]<<"\t";
		}
		cout<<"\n";
	}
}

