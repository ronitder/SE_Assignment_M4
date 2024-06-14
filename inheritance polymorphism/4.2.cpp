/*
 Write a C++ Program to find Area of Rectangle using inheritance
*/
#include<iostream>
using namespace std;

class Shape 
{
	public:
    float length;
    float width;

    Shape(float l, float w) 
	{
		length=l;
	    width=w;
	}

    float area() 
	{
        return length * width;
    }
};

class Rectangle : public Shape 
{
	public:
   
    Rectangle(float l, float w) : Shape(l, w) {}
};

main()
{
    float length, width;
    cout<<"\n\n\t Enter length of the rectangle: ";
    cin>>length;
    cout<<"\n\n\t Enter width of the rectangle: ";
    cin>>width;

    Rectangle rect(length, width);

    cout<<"\n\n\t Area of the rectangle: "<<rect.area();

    return 0;
}
