/*
 Assume a class cricketer is declared. Declare a derived class batsman from cricketer. 
Data member of batsman. Total runs, Average runs and best performance. Member functions input data, calculate 
average runs, Display data. (Single Inheritance)
*/
#include<iostream>
using namespace std;

class cricketer 
{
	public:
	string name;
    int age;
		cricketer(string n, int a)
		{
			name=n;
			age=a;
		}
    	
		void inputData() 
		{
    	    cout<<"\n\n\t Enter name: ";
    	    cin>>name;
    	    cout<<"\n\n\t Enter age: ";
    	    cin>>age;
    	}
};

class batsman : public cricketer 
{
	public:
	int totalRuns;
    float averageRuns;
    int bestPerformance;
    float matchplayed;
    
    batsman(string n, int a) : cricketer(n, a) {}
    
    void inputData() 
	{
        cricketer::inputData();
        cout<<"\n\n\t Enter total runs : ";
        cin>>totalRuns;
        cout<<"\n\n\t Enter best performance : ";
        cin>>bestPerformance;
        cout<<"\n\n\t Enter Number of Match played : ";
        cin>>matchplayed;
    }

    void calculateAverageRuns() 
	{
        averageRuns=totalRuns/matchplayed;
    }

    void displayData() 
	{
        cout<<"\n\n\t ... Batsman Details... : ";
        cout<<"\n\n\t Batsman Name : "<<name;
        cout<<"\n\n\t Batsman Age : "<<age;
        cout<<"\n\n\t Batsman Total Runs : "<<totalRuns;
        cout<<"\n\n\t Batsman Best Performance : "<<bestPerformance;
        cout<<"\n\n\t Batsman Average Runs : "<<averageRuns;
    }
};

main() 
{
    batsman B("", 0);

    B.inputData();
    B.calculateAverageRuns();
    B.displayData();

}
