#include<iostream>
using namespace std;
class abc
{
	public:
		int a;
		int b;
		int c;
		void get()
		{
			cout<<"Enter first no.";
			cin>>a;
			cout<<"Enter second no.";
			cin>>b;
		}
			
		
		void add(){
			c=a+b;
		}
		void sub(){
			c=a-b;
		}
		void mul(){
			c=a*b;
		}
		void div(){
			c=a/b;
		}
		void dis(){
			cout<<"The result is "<<c;
		}
};	
		int main(){
			abc d;
			int choice;
			cout<< "press 1. add 2. subtraction 3. multiplication 4. division \n";
			cin>>choice;
			switch(choice){
				case 1:
					d.get();
					
					d.add();
					d.dis();
					break;
					
				case 2:
					d.get();
					
					d.sub();
					d.dis();
					break;
					
				case 3:
					d.get();
					
					d.mul();
					d.dis();
					break;
					
				case 4:
					d.get();
					d.div();
					d.dis();
					break;
				default:
					cout<<"ERROR";
			}
			return 0;
		}
