/*6. Write a C++ program to implement a class called Employee that has 
private member variables for name, employee ID, and salary. Include 
member functions to calculate and set salary based on employee 
performance. Using of constructor */
#include<iostream>
using namespace std;

class employee
{
	string name;
	int emp_id,salary;
	public:
		employee()
		{
			cout<<"\n\n\t enter name : ";
			cin>>name;
			cout<<"\n\n\t enter employee id : ";
			cin>>emp_id;
			cout<<"\n\n\t enter employee salary : ";
			cin>>salary;
		}
		void printinfo()
		{
			cout<<"\n\n\t enter name : "<<name;
			cout<<"\n\n\t enter employee id : "<<emp_id;
			cout<<"\n\n\t enter employee salary : "<<salary;
		}
};
main()
{
	employee e;
	e.printinfo();
}
				
	
