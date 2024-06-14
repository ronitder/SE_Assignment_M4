/*
 Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two
number using different parameters and Function Overloadin
*/
#include<iostream>
using namespace std;

class Mathematic
{
	int n1,n2;
	
	public : 
		int add(int x, int y)
		{
			n1=x;
			n2=y;
			return n1+n2;
		}
		int sub(int x, int y)
		{
			n1=x;
			n2=y;
			return n1-n2;
		}
		int mul(int x, int y)
		{
			n1=x;
			n2=y;
			return n1*n2;
		}
		int div(int x, int y)
		{
			n1=x;
			n2=y;
			return n1/n2;
		}
};

main()
{
	int n1,n2;
	cout<<"\n\n\t Enter a Number 1 : ";
	cin>>n1;
	cout<<"\n\n\t Enter a Number 2 : ";
	cin>>n2; 
	
	Mathematic M;
int	summ=M.add(n1,n2);
int	subb=M.sub(n1,n2);
int	mull=M.mul(n1,n2);
int	divv=M.div(n1,n2);
	
	cout<<"\n\n\t Addition = "<<summ;
	cout<<"\n\n\t Subtraction = "<<subb;
	cout<<"\n\n\t Multiplication = "<<mull;
	cout<<"\n\n\t Division = "<<divv;
}
