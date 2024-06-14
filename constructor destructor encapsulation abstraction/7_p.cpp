/*
Write a C++ program to implement a class called Date that has private member variables for day, month,
and year. Include member functions to set and get these variables, as well as to validate if the date is valid.
*/

#include<iostream>
using namespace std;

class date
{
	private : 
		int day;
		int month;
		int year;
		
	public :
		date(int day, int month, int year)
		{
			this->day=day;
			this->month=month;
			this->year=year;
		}
	
		void print()
		{
			if(month<1 || month>12)
				cout<<"\n\n\t invalid month";
			if(day<1 || day>31)
				cout<<"\n\n\t Invalid day";
			cout<<"\n\n\t Date : "<<day<<"/"<<month<<"/"<<year;			
		}
};

main()
{
	date d(28,12,2000);
	
	d.print();
}
