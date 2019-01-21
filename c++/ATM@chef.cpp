#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
	int wdb;
	float balance;
	cin>>wdb>>balance;
	if(wdb%5==0 && (wdb+0.5)<=balance)
	cout<<setprecision(2)<<fixed<<(balance-wdb-0.5);
	else 
	cout<<setprecision(2)<<fixed<<balance;
}
