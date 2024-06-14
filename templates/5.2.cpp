/*
 Write a program of to sort the array using templates
*/
#include<iostream>
using namespace std;
template<class T>
class sort
{
	public :
	T a,b;
	void sorting(T i)
{
	T a;
	for(T i=0;i<5;i++)
	{
		cout<<"\n\n\t input a["<<i+1<<"] : ";
		cin<<a[i];
	}
	cout<<"\n\n\t Before sort : "<<a;
	
}
void aftersort(T j)
{
	T b;
	for(T i=0;i<5;i++)
	{
		for(T j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				T temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"\n\n\t After sort : "<<a;
}
	
};

main()
{
	sort S;
	S.sorting(a);
	S.aftersort(a);
	
}
