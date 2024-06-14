/*
Write a program to find the max number from given two numbers using friend function
*/
#include<iostream>
using namespace std;

class max_number
{
	int n1,n2;
	friend int maximum(max_number &m)
	{
		if(m.n1>m.n2)
		{
			cout<<"\n\n\t Number 1 is Maximum";	
		}	
		else
		{
			cout<<"\n\n\t Number 2 is Maximum";
		}
	}
	public : 
			void getdata()
			{
				cout<<"\n\n\t Enter a Number 1 : ";
				cin>>n1;
				cout<<"\n\n\t Enter a Number 2 : ";
				cin>>n2;
			}	
		
};

main()
{
	max_number m;
	m.getdata();
	int max=maximum(m);
	
	
}
