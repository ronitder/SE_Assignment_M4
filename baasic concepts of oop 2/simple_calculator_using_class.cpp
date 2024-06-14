/*
  WAP to create simple calculator using class
*/

#include<iostream>
using namespace std;

class calculator
{
	int n1,n2;
	
	public :
		void number()
		{
			cout<<"\n\n\t Enter a Number 1 : ";
			cin>>n1;
			cout<<"\n\n\t Enter a Number 2 : ";
			cin>>n2;
			
		}
		
		void addition()
		{
			cout<<"\n\n\t Addition : "<<n1+n2;
		}
		void subtraction()
		{
			cout<<"\n\n\t subtraction : "<<n1-n2;
		}
		void multiplication()
		{
			cout<<"\n\n\t multiplication : "<<n1*n2;
		}
		void division()
		{
			cout<<"\n\n\t division : "<<n1/n2;
		}

		
		
};

int main()
{
	calculator cl;
	
	cout<<"\n\n\t Calculator";
	
	cl.number();
	
	cl.addition();
	cl.subtraction();
	cl.multiplication();
	cl.division();	
}
