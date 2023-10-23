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

//=======create display class==========
class display
{
	//==============specifier==================
	protected:
		
		int account_no,present_balance=20000,amount_deposite,amount_withdraw;
		string name,address,branch_location;

	public:
		
		//=============define cunstructor================
		display()
		{
			cout<<endl<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||	WELCOME TO ATM		||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
			cout<<endl<<endl<<"\t\t\t\t\t\t\t\t  ----------------------------"<<endl;
		
			//=========current date and time on the current system===========
			time_t now = time(0);
			
			//============convert now to string from=========
			char* date_time = ctime(&now);
			
			cout<<endl<<endl<<"\t\t\t\t\t\t\t     current date : "<<date_time <<endl;
			
			cout<<endl<<endl<<"\t\t\t\t\t\t\t\t  ----------------------------"<<endl;
			cout<<endl<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
			cout<<endl<<endl<<"\t\t\t\t\tPress 1 and Then Press Enter to Access Your Account Via pin Number"<<endl;
			cout<<endl<<"\t\t\t\t\t\t\t\t\tor"<<endl;
			cout<<endl<<"\t\t\t\t\tPress 0 and press Enter to get Help."<<endl;
		}
		
		//==========declare function========
		
		void diposite();
		void withdrawal();
		void inquiery();		
};

//=========scope resolution fun deposite=================
void display :: diposite()
{
	cout<<endl<<endl<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||	  ATM ACCOUNT DEPOSIT SYSTEM	|||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
	cout<<"\nThe Name of Account Holders are :";
	cin>>name;
	cout<<endl;
	cout<<"\n\t\t\tThe Account Holders' address is :";
	cin>>address;
	cout<<endl;
	cout<<"\n\t\t\tThe Branch location is :";
	cin>>branch_location;
	cout<<endl;
	cout<<"\n\t\t\tAccount number :";
	cin>>account_no;
	cout<<endl<<endl<<"|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
	cout<<endl<<endl<<"\t\t\t\t\t\t\tPresent available balance :Rs. "<<present_balance;
	cout<<endl<<"\n\t\t\t\t\t\t\tEnter the Amount to Deposited Rs. ";
	cin>>amount_deposite;
	present_balance = present_balance + amount_deposite ;
	cout<<"\n\t\t\t\t\t\t   Your new available Balanced Amount is Rs. "<<present_balance;
	cout<<endl<<"\n\t\t\t\t\t\t\t\t\tThank You!";
	cout<<endl<<endl;
	cout<<"Press any Key to Return to the Main Menu"<<endl;														
}

//=========scope resolution fun withdrawal=================
void display :: withdrawal()
{
	cout<<endl<<endl<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||	  ATM ACCOUNT WITHDRAWAL	|||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
	cout<<"\nThe Name of Account Holders are :";
	cin>>name;
	cout<<endl;
	cout<<"\n\t\t\tThe Account Holders' address is :";
	cin>>address;
	cout<<endl;
	cout<<"\n\t\t\tThe Branch location is :";
	cin>>branch_location;	
	cout<<endl;
	cout<<"\n\t\t\tAccount number :";
	cin>>account_no;								
	cout<<endl<<endl<<"|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
							
	//======BLALANCE IS O USE IF CONDITION
	if(present_balance != 0)
	{
		cout<<endl<<"\n\t\t\t\t\t\t\t\tEnter the Amount  Rs. ";
		cin>>amount_withdraw;
		present_balance = present_balance - amount_withdraw;
		cout<<"\n\t\t\t\t\t\t\t\tYour Balanced Amount is Rs. "<<present_balance<<endl;
	}
	else
	{
		cout<<endl<<"\n\t\t\t\t\t\tInsufficient Available Balance in your account.";
		cout<<endl<<"\n\t\t\t\t\t\t\t\t\tSorry !!";
	}
}

//=========scope resolution fun inquiery=================

void display :: inquiery()
{
	cout<<endl<<endl<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||	  ATM ACCOUNT BALANCE INQUERY	|||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
	cout<<"\nThe Name of Account Holders are :";
	cin>>name;
	cout<<endl;
	cout<<"\n\t\t\tThe Account Holders' address is :";
	cin>>address;
	cout<<endl;
	cout<<"\n\t\t\tThe Branch location is :";
	cin>>branch_location;
	cout<<endl;
	cout<<"\n\t\t\tAccount number :";
	cin>>account_no;								
	cout<<endl<<endl<<"|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
	cout<<endl<<"\n\t\t\t\t\t\t\t\tYour Balanced Amount is Rs. "<<present_balance<<endl<<endl;
					
}

//==========main function=========
int main()
{
	//============create class obj=========
	display d1;
	
	int choice,pin;
	
	cin>>choice;
	
	// ====================switch case=======================
	switch(choice)
	{
		
		case 0:
			break;
			
		case 1:
			
			cout<<"\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||	ATM ACOUNT ACCESS	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
			cout<<endl<<endl<<"Enter your Acc pin Access Number! [Only one attempt  is allowed]"<<endl;
			cout<<"\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
			cin>>pin;
			
			
			
			//=========codition============
			
			if(pin>=10000 && pin<=99999)
			{
		  		cout<<"\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||	ATM ACOUNT STATUS	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
				cout<<endl<<endl<<"\t\t\t\t\tYou must the corrent pin number to aceess this acount. See your"<<endl;
				cout<<"\n\t\t\t\t\tbank representative for assistance during bank opening hours"<<endl;
				cout<<"\n\t\t\t\t\t\t\t  Thanks for, your choice today!!"<<endl;
				cout<<"\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
				
				
				int ch;
				
				//==========create manu use while loop============
				while(1)
				{
					
					//===================ATM MAIN MANU SCREEN=====================
					cout<<"\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||	ATM Main Menu Screen	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
					cout<<endl<<endl<<"\t\t\t\t\t\t\t\t   Enter [1] To Deposite Cash"<<endl;
					cout<<endl<<endl<<"\t\t\t\t\t\t\t\t   Enter [2] To Withdraw Cash"<<endl;
					cout<<endl<<endl<<"\t\t\t\t\t\t\t\t   Enter [3] To Balance Inquery"<<endl;
					cout<<endl<<endl<<"\t\t\t\t\t\t\t\t   Enter [0] To Exit ATM"<<endl;
					cout<<endl<<endl<<"\t\t\t\t\t\t\t  PLEASE ENTER A SELECTION AND PRESS RETURN KEY:"<<endl;
					cout<<endl<<endl<<"|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
						
					
					cout<<endl<<"Enter youe menu choice : ";
					cin>>ch;
					
					//=============use switch case===========
					switch(ch)
					{
					
						//================DEPOSIT SYSTEM=====================
						case 1:
							
							d1.diposite();
							break;
							
						//================WITHDRAW SYSTEM=====================
						case 2:
							d1.withdrawal();
							break;
							
							//=========BALANCE INQUERY============
						case 3:
							d1.inquiery();
							break;
						
							//==========Exit=========	
						case 0:
							exit(1);
							break;
								
						default:
							cout<<endl<<"Enter correct choice";
					}	
				}
				
			}
			else
			{
				cout<<"\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||            THANK YOU        	||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
				cout<<"\n\n\t\t\t\t\tYou had made your attempt which failed!!! No More attempts allowed!! Sorry!!";
				cout<<"\n\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
				break;
			}
	
	}
	return 0;
}
