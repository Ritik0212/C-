#include<iostream>
#include<tgmath.h>
#include<complex>
#include<valarray>
 using namespace std;
 int main(){
 	int t;
 	cin>>t;
 	int number;
 	for(int i=0;i<t;i++){
 		cin>>number;
 		int twos=0,fives=0;
 		
 		for (int j=1;j<=log(number)/log(5);j++){
 			fives+=number/(pow(5,j));
 		}
 			cout<<fives<<"\n";
		 }
 }
