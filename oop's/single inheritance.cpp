/*
Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance)
*/

#include<iostream>
using namespace std;
//create base class cricketer
class cricketer{
	protected:
		//data member
		string name;
		int age,runs_scored=0,matches_played;
	public:
		
		//member function
		void detail()
		{
			cout<<"Enter player name : ";
			cin>>name;
			cout<<"\nEnter age : ";
			cin>>age;
			cout<<"\nEnter how many matches played in a batsmen : ";
			cin>>matches_played;
		}
		void display_detail()
		{
			cout<<"\nPlayer name is : "<<name <<"\nPlayer age is : "<<age <<"\nTotal matches played in : "<<matches_played ;
		}
	
};

//create derived class batsman
class batsman : public cricketer{
	// data member
	protected:
		int total;
		float avg_runs;
		string performance;
	public:
		
		//member function
		void avg()
		{
			for(int i;i<matches_played;i++)
			{
				cout<<"\nEnter score : ";
				cin>>runs_scored;
				total = total + runs_scored;
			}
			avg_runs = total / matches_played ;
			
		}
	
		void avg_display()
		{
			cout<<"\nTotal scores is :" <<total <<"\navg_runs is : "<<avg_runs;
			
			
			// condition in performance
			if(avg_runs >= 80)
			{
				cout<<"\n\n\t\t\tExcllent performance "<<name;
			}
			else if(avg_runs < 80 && avg_runs >= 55)
			{
				cout<<"\n\n\t\t\tvery good performance "<<name;
			}
			else
			{
				cout<<"\n\n\t\t\tgood performance "<<name;	
			}
		}
}; 

int main()
{
	//create object
	
	batsman b1;
	
	//function call
	b1.detail();
	b1.avg();
	b1.display_detail();
	b1.avg_display();
	return 0;
}
