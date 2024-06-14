/*4. Write a C++ program to implement a class called Bank Account that has 
private member variables for account number and balance. Include 
member functions to deposit and withdraw money from the account. */
#include<iostream>
using namespace std;
class bank_account
{
	int acc_num;
	int balence;
	int dip,diposite_bal,with,withdraw_bal;
	public:
	void diposite()
	{
		cout<<"\n\n\t enter diposite amount : ";
		cin>>dip;
		diposite_bal=balence+dip;
		cout<<"\n\n\t balence : "<<diposite_bal;
	}
	void withdraw()
	{
		cout<<"\n\n\t enter withdraw amount : ";
		cin>>with;
		withdraw_bal=diposite_bal-with;
		cout<<"\n\n\t balence : "<<withdraw_bal;	
	}
};
main()
{
	bank_account c;
	c.diposite();
	c.withdraw();
}
