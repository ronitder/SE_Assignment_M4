/*
 Write a C++ program to create a class called Triangle that has private member variables for the lengths
of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles,
or scalene.
*/

#include<iostream>
using namespace std;

class Triangle
{
	private : 
		int s1, s2, s3;
		
	public : 	
		
		Triangle(int l1,int l2,int l3)
		{
			s1=l1;
			s2=l2;
			s3=l3;
		}
	
		void print()
		{
			if(s1 == s2 && s2 == s3)
			{
				cout<<"\n\n\t Triangle is Equilateral ";
			}
			else if(s1 == s2 || s2 == s3 || s1 == s3)
			{
				cout<<"\n\n\t Triangle is Isosceles ";
			}
			else
			{
				cout<<"\n\n\t Triangle is Scalene ";
			}
		}
};

main()
{
	
	int l1,l2,l3;
	
	cout<<"\n\n\t Enter a side length : ";
	cin>>l1>>l2>>l3;
	
	Triangle T(l1,l2,l3);
	T.print();
}
