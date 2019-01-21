#include<iostream>
#include<math.h>
using namespace std;
void fcfs(int que[100], int size, int st ){
	int i,s=0;
	for(i=0;i<size;i++){
		s+=abs(que[i]-st);
		st=que[i];
	}
	cout<<"total Seek time for fcfs : "<<s<<"\n";
}

main(){
	int que[]={95, 180, 34, 119, 11, 123, 62, 64};
	int choice,st=50;
			cout<< "press 1. fcfs 2. sstf 3. scan  4. cscan \n";
			cin>>choice;
			switch(choice){
				case 1:
					fcfs(que,sizeof(que)/sizeof(que[0]),st);
					break;
				default:
					cout<<"Error";
}}
