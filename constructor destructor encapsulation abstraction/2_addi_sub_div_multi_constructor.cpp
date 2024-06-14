/*2. Write a program of Addition, Subtraction, Division, Multiplication using 
constructor.*/
#include<iostream>
using namespace std;
class calc
{
	int n1,n2;
	
	public : 
	 	calc(int a1,int a2)
		 {
		 	n1=a1;
		 	n2=a2;
		 }	
		 void print()
		 {
		 	cout<<"\n\n\t addition : "<<n1+n2;
		 	cout<<"\n\n\t substraction : "<<n1-n2;
		 	cout<<"\n\n\t divition : "<<n1/n2;
		 	cout<<"\n\n\t multiplication : "<<n1*n2;
		 }
		 
};

main()
{
	calc c(5,10);
	c.print();
	
}
