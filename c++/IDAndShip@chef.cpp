#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	char letter[t];
	for(int i=0;i<t;i++){
		cin>>letter[i];
		if(letter[i]=='B' || letter[i]=='b') cout<<"BattleShip\n";
		else if(letter[i]=='C' || letter[i]=='c') cout<<"Cruiser\n";
		else if(letter[i]=='D' || letter[i]=='d') cout<<"Destroyer\n";
		else if(letter[i]=='F' || letter[i]=='f') cout<<"Frigate\n";
	}
}
