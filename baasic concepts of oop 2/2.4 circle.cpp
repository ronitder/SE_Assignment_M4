/*
  Write a C++ program to implement a class called Circle that has private member variables for radius. 
Include member functions to calculate the circle's area and circumference.
*/

#include<iostream>
using namespace std;

class circle 
{
	public : 
	float area(float a)
	{
		return 3.14*a*a;
	}
	float circumference(float ci)
	{
		return 2*3.14*ci;
	}
		
};
main()
{
	circle C;
	float r, a, ci;
	
	cout<<"\n\n\t Radius : ";
	cin>>r;
	
	a=C.area(r);
	cout<<"\n\n\t Area = "<<a;
	
	ci=C.circumference(r);
	cout<<"\n\n\t circumference = "<<ci;
}
