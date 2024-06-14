/*
 Write a C++ Program to show access to Private Public and Protected using Inheritance
*/
#include<iostream>
using namespace std;

class base
{
	private : int a;
	protected : int b;
	public : int c;
	
	void get_a()
	{
		a=100;
		cout<<"\n\n\t A = "<<a;		
	}	
};

class derived : public base
{
	public :
		void get_b()
		{
			b=200;
			cout<<"\n\n\t B = "<<b;
		}
		
		void get_c()
		{
			c=300;
			cout<<"\n\n\t C = "<<c;
		}
};

main()
{
	derived d;
	d.get_a();
	d.get_b();
	d.get_c();
	d.c=400;
	cout<<"\n\n\t C = "<<d.c;
	

	
}
