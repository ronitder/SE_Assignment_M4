 /*
 Write a C++ Program display Student Mark sheet using Multiple inheritance
*/

#include <iostream>
using namespace std;

class Student 
{
    	string name;
    	int rollNumber;
	public:
    	void get_Student()
		{
			name="ronit";
			rollNumber=5;
		}

    void displayStudentInfo() 
	{
        cout<<"\n\n\t Student Name: "<<name;
        cout<<"\n\n\t Roll Number: "<<rollNumber;
    }
};

class Marks 
{
    float math, science, english, hindi;
    
	public:
		int total;
    	void get_Marks()
		{
			math=95;
			science=82;
			english=89;
			hindi=90;
			total=math+science+english+hindi;
	    } 
	
    	void displayMarks()
		{
      	  	cout<<"\n\n\t Math Marks: "<<math;
      		cout<<"\n\n\t Science Marks: "<<science;
       		cout<<"\n\n\t English Marks: "<<english;
       		cout<<"\n\n\t Hindi Marks: "<<hindi;
       		cout<<"\n\n\t Total Marks: "<<total;
    	}
};

class StudentMarksheet : public Student, public Marks 
{
	public:
	
	void gread()
	{
	if(total>90)
    	cout<<"\n\n\t Gread A+ ";
    else if(total>80)
    	cout<<"\n\n\t Gread A ";
    else if(total>70)
    	cout<<"\n\n\t Gread B+ ";
    else if(total>60)
    	cout<<"\n\n\t Gread B ";
    else if(total>50)
    	cout<<"\n\n\t Gread c ";
    else
    	cout<<"\n\n\t Fail ";
	}
    
};

main() 
{

    StudentMarksheet s;
    s.get_Student();
    s.displayStudentInfo();
    s.get_Marks();
    s.displayMarks();
    s.gread();
    

}
