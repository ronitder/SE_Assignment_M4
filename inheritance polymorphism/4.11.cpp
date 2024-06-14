/*
 Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
Rectangle: Area * 
breadth Triangle: ½
*Area* breadthCircle: 
Pi * Area *Area
*/

#include<iostream>
using namespace std;

class rectangle
{
	float l,w,b,h,a;
	public : 
		float area(float len, float wid)
		{
			len=l;
			wid=w;
			return l*w;	
		}
		float triangle(float base, float height)
		{
			base=b;
			height=h;
			return 0.5*b*h;	
		}	
		float breadthCircle(float areaa)
		{
			areaa=a;
			return 3.14*a*a;
		}
};

main()
{
	float l,w,b,h,a;
	cout<<"\n\n\t Enter a value : ";
	cin>>l>>b;
	
	rectangle R;
	float cir=R.area(l,w);
	float tri=R.triangle(b,h);
	float brecir=R.breadthCircle(a);
	
	cout<<"\n\n\t Area of Rectangle = "<<cir;
	cout<<"\n\n\t Area of Triangle = "<<tri;
	cout<<"\n\n\t Area of Circle = "<<brecir;

}
