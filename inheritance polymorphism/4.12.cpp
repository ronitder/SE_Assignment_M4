/*
Write a program to swap the two numbers using friend function without using third variable
*/
#include<iostream>
using namespace std;
class swap_num
{
	private : 
		int a,b;
		
		friend int swapping(swap_num &s)
		{
			s.a=s.a+s.b;
			s.b=s.a-s.b;
			s.a=s.a-s.b;		
		}	
	public : 
		void getdata()
		{
			cout<<"\n\n\t Enter Number 1 : ";
			cin>>a;
			cout<<"\n\n\t Enter Number 2 : ";
			cin>>b; 
		}
		void printdata()
		{
			cout<<"\n\n\t Swapping Number 1 : "<<a;
			cout<<"\n\n\t Swapping Number 2 : "<<b; 
		}
};

main()
{
	swap_num s;
	s.getdata();
	cout<<"\n\n\t Before Swapping ";
	s.printdata();
	swapping(s);
	cout<<"\n\n\t After Swapping ";
	s.printdata();
}
