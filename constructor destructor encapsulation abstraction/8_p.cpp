/*8. Write a C++ program to implement a class called Student that has private 
member variables for name, class, roll number, and marks. Include 
member functions to calculate the grade based on the marks and display 
the student's information. Accept address from each student implement 
using of aggregation*/
#include<iostream>
using namespace std;
class student
{
	string name,address;
	int claass,roll_num,mark;
	public:
	void getinfo()
	{
		cout<<"\n\n\t enter name : ";
		cin>>name;
		cout<<"\n\n\t enter address : ";
		cin>>address;
		cout<<"\n\n\t enter claass : ";
		cin>>claass;
		cout<<"\n\n\t enter roll number : ";
		cin>>roll_num;
		cout<<"\n\n\t enter mark : ";
		cin>>mark;
	}
	void printinfo()
	{
		cout<<"\n\n\t enter name : "<<name;
		cout<<"\n\n\t enter address : "<<address;
		cout<<"\n\n\t enter claass : "<<claass;
		cout<<"\n\n\t enter roll number : "<<roll_num;
		cout<<"\n\n\t enter mark : "<<mark;	
	}
	void grade()
	{
		if(mark>90)
		{
			cout<<"\n\n\t grade A";
		}
		else if(mark>80)
		{
			cout<<"\n\n\t grade B";
		}
		else if(mark>70)
		{
			cout<<"\n\n\t grade C";
		}
		else if(mark>60)
		{
			cout<<"\n\n\t grade D";
		}
		else if(mark>50)
		{
			cout<<"\n\n\t fail ";	
		}
		
	}
};
main()
{
	student S;
	S.getinfo();
	S.printinfo();
	S.grade();
}
