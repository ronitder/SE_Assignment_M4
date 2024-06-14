/*
 Write a program of to swap the two values using template
*/
#include<iostream>
using namespace std;
template<class T>

void swaping(T x, T y)
{
	T temp;	
	temp=x;
	x=y;
	y=temp;
	
	cout<<"\n\n\t After Swapping ... ";
	cout<<"\n\n\t X = "<<x<<"\n\n\t Y = "<<y;
}
main()
{
	float a, b;	
	cout<<"\n\n\t Enter number 1 : ";
	cin>>a;
	cout<<"\n\n\t Enter number 2 : ";
	cin>>b;
	
	cout<<"\n\n\t Before Swapping ... ";
	cout<<"\n\n\t a = "<<a<<"\n\n\t b = "<<b;
	swaping(a, b);
}
