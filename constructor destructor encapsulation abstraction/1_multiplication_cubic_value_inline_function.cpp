/*1. Write a program to find the multiplication values and the cubic values using 
inline function */
#include<iostream>
using namespace std;
class math
{
	public : 
	int square(int s)
	{
		return s*s;
	}
	int cube(int a)
	{
		return a*a*a;
	}
};
main()
{
	math m;
	int n=5,sq,cu;
	sq=m.square(n);
	cout<<"\n\n\t square : "<<sq;
	cu=m.cube(n);
	cout<<"\n\n\t cube : "<<cu;
	
}
