/*
 Write a C++ program to create a class called Person that has private member variables for name, age and 
country. Implement member functions to set and get the values of these variables.
*/

#include<iostream>
using namespace std;

class Person
{
	string name;
	int age;
	string country;
	
	public :
		void getinfo()
		{
			cout<<"\n\n\t Enter a Name : ";
			cin>>name;
			cout<<"\n\n\t Enter a age : ";
			cin>>age;
			cout<<"\n\n\t Enter a country : ";
			cin>>country;
		}
		void printinfo()
		{
			cout<<"\n\n\t Name : "<<name;
			cout<<"\n\n\t Age : "<<age;
			cout<<"\n\n\t Country : "<<country;
		}
	
};

main()
{
	Person P;
	
	P.getinfo();
	P.printinfo();
}
