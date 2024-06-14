/*
 Write a C++ Program to illustrates the use of Constructors in multilevel inheritance
*/
#include<iostream>
using namespace std;

class base 
{
	
	public : 
	int a,b,c;
		void add()
		{
			a=10;
			b=15;
			c=a+b;
			cout<<"\n\n\t Addition = "<<c;
		}	
};
class subtraction : public base
{
	
	public : 
	int d,e,f;
		void sub()
		{
			d=20;
			e=10;
			f=d-e;
			cout<<"\n\n\t Subtraction = "<<f;
		}
};
class multiplication : public subtraction
{
	public : 
	int g,h,i;
		void mul()
		{
			g=10,h=5;
			i=g*h;
			cout<<"\n\n\t Multiplication = "<<i;
			
		}
};

main()
{
	multiplication M;
	M.add();
	M.sub();
	M.mul();
}
