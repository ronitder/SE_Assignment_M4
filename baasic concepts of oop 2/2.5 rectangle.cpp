/*
 Write a C++ program to create a class called Rectangle that has private member variables for length 
and width. Implement member functions to calculate the rectangle's area and perimeter
*/

#include<iostream>
using namespace std;

class rectangle
{
	int length, width;
	
	public :
		
		rectangle(int l, int w)
		{
			length=l;
			width=w;
		}
	    void print_value()
	    {
	    	cout<<"\n\n\t "<<length;
	    	cout<<"\n\n\t "<<width;
	    	cout<<"\n\n\t Area of Rectangle = "<<length*width;
	    	cout<<"\n\n\t Perimeter of Rectangle = "<<2*(length+width);
		}
	
};

main()
{
	rectangle R(15,20);

	R.print_value();	
}
