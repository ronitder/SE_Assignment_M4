 /*
 Create a class person having members name and age. Derive a class student having member percentage.
Derive another class teacher having member salary. Write necessary member function to initialize, read and 
write data. Write also Main function (Multiple Inheritance)
*/
#include <iostream>
using namespace std;

class person 
{
    string name;
    int age;
    
	public:
       
    void personinfo() 
	{
        cout<<"\n\n\t Enter Person Name : ";
        cin>>name;
        cout<<"\n\n\t Enter Person age : ";
        cin>>age;
    }
    void personprint()
    {
    	cout<<"\n\n\t Person Name : "<<name;
        cout<<"\n\n\t Person Age : "<<age;
	}
};

class student : public person 
{
    float percentage;
    
	public:
    
		void studentinfo() 
		{
       		person::personinfo();
        	cout<<"\n\n\t Enter Student percentage : ";
        	cin>>percentage;
    	}
    	void studentprint()
    	{
    		person::personprint();
    		cout<<"\n\n\t Student Percentage : "<<percentage;
		}
};

class teacher : public person 
{
    float salary;

	public:
		
    void teacherinfo() {
        person::personinfo(); // Call base class function
        cout<<"\n\n\t Enter salary : ";
        cin>>salary;
        
    }
    void teacherprint()
    {
    	person::personprint();
    	cout<<"\n\n\t Salary : "<<salary;
	}
};

main() 
{
    student S;
    teacher T;
    
    S.studentinfo();
    S.studentprint();
    T.teacherinfo();
    T.teacherprint();
    
}
