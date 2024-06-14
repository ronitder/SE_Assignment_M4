/*
Define a class to represent a bank account. Include the following members:
  Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
  Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/

#include<iostream>
using namespace std;
 
class bank_account
{
 	public:
 	string name;
 	int ac_num;
 	string ac_type;
 	int balence;
 	int balence1;
 	int balence2;
 	int deposite_amount;
 	int withdraw_amount;
 	
	public :  
 		void getinfo()
		{
 			cout<<"\n\n\t Enter Name  : ";
			cin>>name;
			cout<<"\n\n\t Enter Account Number : ";
			cin>>ac_num;
			cout<<"\n\n\t Enter Account Type : ";
			cin>>ac_type;
			cout<<"\n\n\t Enter Available Balance : ";
			cin>>balence;
			cout<<"\n\n\t Enter Diposite Amount : ";
			cin>>deposite_amount;	
		}
	
		void d_balence()
		{
			balence1=balence+deposite_amount;
			cout<<"\n\n\t Available Balence : "<<balence1;
		}
		void withdraw()
		{
			cout<<"\n\n\t Enter Withdraw Amount : ";
			cin>>withdraw_amount;
			
			if(balence>withdraw_amount)
			{
				cout<<"\n\n\n\t Amount Withdraw Successfully.";
				balence2=balence1-withdraw_amount;
				cout<<"\n\n\t available balence : "<<balence2;
			}
			else
			{
				cout<<"\n\n\t withdraw can't possible because your balence is low.";
			}
		}
		void display_name()
		{
			cout<<"\n\n\t Name : "<<name;
			cout<<"\n\n\t Available Balence : "<<balence1;
		}
		void printinfo()
		{
			cout<<"\n\n\t Account Name : "<<name;
			cout<<"\n\n\t Account Number : "<<ac_num;
			cout<<"\n\n\t Account Type : "<<ac_type;
			cout<<"\n\n\t Account Balence : "<<balence;
			cout<<"\n\n\t Diposite Amount : "<<deposite_amount;
			cout<<"\n\n\t Withdraw Amount : "<<withdraw_amount;
			cout<<"\n\n\t Name : "<<name;
			cout<<"\n\n\t Balence : "<<balence2;
		}		
};
	
		
main()
{
 	bank_account obj;
 	obj.getinfo();
 	obj.d_balence();
 	obj.withdraw();
 	obj.display_name();
}
