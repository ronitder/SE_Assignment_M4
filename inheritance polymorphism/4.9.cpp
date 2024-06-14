/*
 Write a Program of Two 1D Matrix Addition using Operator Overloading
*/
#include<iostream>
using namespace std;
class matrix
{
	int n1,n2;
	int n3,n4;
	public:
		void getinfo()
		{
			n1=15;
			n2=25;
			n3=30;
			n4=55;
			cout<<"\n\n\t matrix-1 :"<<n1<<" "<<n2;
			cout<<"\n\n\t matrix-2 :"<<n3<<" "<<n4;
		}
		void sum()
		{
			int add1,add2;
			add1=n1+n3;
			add2=n2+n4;
			cout<<"\n\n\t after 1D matrix addition.";
			cout<<"\n\n\t matrix : "<<add1<<" "<<add2;
		}
};
main()
{
	matrix m;
	m.getinfo();
	m.sum();
}
