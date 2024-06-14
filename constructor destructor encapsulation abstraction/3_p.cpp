/*3. Write a C++ program to create a class called Car that has private 
member variables for company, model, and year. Implement member 
functions to get and set these variables.*/
#include<iostream>
using namespace std;
class car
{
	string company,modal;
	int year;
	public: 
		void getdata()
		{
			cout<<"\n\n\t enter company : ";
			cin>>company;
			cout<<"\n\n\t enter modal : ";
			cin>>modal;
			cout<<"\n\n\t enter year : ";
			cin>>year;
		}
		void printdata()
		{
			cout<<"\n\n\t name : "<<company;
			cout<<"\n\n\t age : "<<modal;
			cout<<"\n\n\t country : "<<year;
		}
};

main()
{
	car c;
	c.getdata();
	c.printdata();
}
