//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<ATM Banking Application>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*
A Program should use the concept of OOP.(compulsory : Constructor),
Make use of scope resolution operator,
Loops,
ConditionalStatements,
Whichever is required.
*/

#include<iostream>
#include<ctime>
using namespace std;

class display
{
	public:
		// declaration
		void date_time();
		void pin_choice();
};

//defination
void display :: date_time()
{
		cout<<"\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||	WELCOME TO ATM		||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
		cout<<"\n\n\t\t\t\t\t\t\t\t  ----------------------------"<<endl;
		//current date and time on the current system
		time_t now = time(0);
		
		//convert now to string from
		char* date_time = ctime(&now);
		
		cout<<"\n\n\t\t\t\t\t\t\t     current date : "<<date_time <<endl;
		
		cout<<"\n\n\t\t\t\t\t\t\t\t  ----------------------------"<<endl;
		cout<<"\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
		cout<<"\n\n\t\t\t\t\tPress 1 and Then Press Enter to Access Your Account Via pin Number"<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\tor"<<endl;
		cout<<"\n\t\t\t\t\tPress 0 and press Enter to get Help."<<endl;
}

void display :: pin_choice()
{
	int choice,pin;
	//cout<<"\nEnter your choice : ";
	cin>>choice;
	if(choice == 1)
	{
		cout<<"\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||	ATM ACOUNT ACCESS	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
		cout<<"\n\nEnter your Acc pin Access Number! [Only one attempt  is allowed]"<<endl;
		cout<<"\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
		cin>>pin;
		if(pin>=10000 && pin<=99999)
		{
	  		cout<<"\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||	ATM ACOUNT STATUS	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
			cout<<"\n\n\t\t\t\t\tYou must the corrent pin number to aceess this acount. See your"<<endl;
			cout<<"\n\t\t\t\t\tbank representative for assistance during bank opening hours"<<endl;
			cout<<"\n\t\t\t\t\t\t\t  Thanks for, your choice today!!"<<endl;
			cout<<"\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";

		}
		else
		{
			
		}
    }
		
}

int main()
{
	display d1;
	d1.date_time();
	d1.pin_choice();
	return 0;
}
