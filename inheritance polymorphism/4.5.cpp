/*
 Assume that the test results of a batch of students are stored in three different classes.
Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and class result 
contains the total marks obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)
*/
#include<iostream>
using namespace std;

class Student 
{
    int rollNumber;
	public:
		
    Student(int roll)
	{
		rollNumber=roll;
	}

    void displayRollNumber() 
	{
        cout<<"\n\n\t Roll Number : "<<rollNumber;
    }
};

class Test : public Student 
{
    float m1;
    float m2;
	public:
    
    Test(int roll, float subj1, float subj2) : Student(roll), m1(subj1), m2(subj2) {}

    void displayTestMarks() 
	{
        cout<<"\n\n\t Marks Subject 1 : "<<m1;
        cout<<"\n\n\t Marks Subject 2 : "<<m2;
    }
    float getm1(){return m1;}
    float getm2(){return m2;}
};

class Result : public Test 
{
    float totalMarks;
	public:
    
    Result(int roll, float subj1, float subj2) : Test(roll, subj1, subj2) {}

    void calculateTotalMarks() 
	{
        totalMarks = getm1()+ getm2();
        cout<<"\n\n\t Total Marks: "<<totalMarks;
    }
};

main() 
{
    Result R(101,85.5,90.0);

    R.displayRollNumber();
    R.displayTestMarks();
	R.calculateTotalMarks();

}
