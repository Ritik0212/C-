#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t,n,a;
	cin>>t;
	while(t--){
		cin>>n>>a;
		if(a==1){
			cout<<n<<" ";
			for(int i=0;i<n;i++){
				cout<<(char)(97);
			}
			cout<<"\n";
		}
		else if (a==2){
			if(n==1){
				cout<<1<<" "<<"a\n";
			}
			else if(n==2){
				cout<<1<<" "<<"ab\n";
			}
			else if(n==3){
				cout<<2<<" "<<"abb\n";
			}
			else if(n==4){
				cout<<2<<" "<<"aabb\n";
			}
			else if(n==5){
				cout<<3<<" "<<"aabbb\n";
			}
			else if(n==6){
				cout<<3<<" "<<"aaabab\n";
			}
			else if(n==7){
				cout<<3<<" "<<"aaababb\n";
			}
			else if(n==8){
				cout<<3<<" "<<"aaababbb\n";
			}
			else if(n==9){
				cout<<4<<" "<<"aaaababbb\n";
			}
			else if(n==10){
				cout<<4<<" "<<"aaaababbbb\n";
			}
		}
		else if(a>2){
			cout<<1<<" ";
			for(int i=0;i<n/a;i++){
				for(int j=0;j<a;j++){
					cout<<(char)(j+97);
				}
			}
			for(int j=0;j<n%a;j++){
				cout<<(char)(j+97);
			}
			cout<<"\n";
		}
		
	}
}
