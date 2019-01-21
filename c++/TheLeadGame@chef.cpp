#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int lead[n],leader[n],sco1[n],sco2[n];
	int score1=0,score2=0;
	for(int i=0;i<n;i++){
		cin>>sco1[i]>>sco2[i];
		score1+=sco1[i];
		score2+=sco2[i];
		leader[i]= (score1>score2)? 1:2;
		lead[i]= (score1>score2)? (score1-score2):(score2-score1);
		
	}
	int max=lead[0],k;
	for(int j=0;j<n;j++){
		if(lead[j]>max){
			max = lead[j];
			k=j;
		}
	}
	cout<<leader[k]<<" "<<lead[k];
}
