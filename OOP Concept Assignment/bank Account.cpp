#include<iostream>
using namespace std;
class bank
{
	string  Name_depositor; 
	int  Account_Number;
	string  Type_Account; 
    float Balance_account;
	 
	//To assign values 
	public:
	void get()
	{
		cout<<"Enter name : ";
		cin>>Name_depositor;
		cout<<"\nEnter Account number : ";
		cin>>Account_Number;
		cout<<"\nEnter type of Account : ";
		cin>>Type_Account;
		cout<<"\nEnter Balance Account : ";
		cin>>Balance_account;
	}
	
	//-To deposited an amount 
	
	void deposite()
	{
		float balance;
		cout<<"\n Enter your deposit amout";
		cout<<"\nEnter Amount : ";
		cin>>balance;
		Balance_account = Balance_account + balance ;
		cout<<"\nbalance is : "<<Balance_account;
	}
	
	//	-To withdraw an amount after checking balance
	
	void withdraw()
	{
		float amount;
		cout<<"\nwithdraw an amount after checking balance";
		cout<<"\nEnter amount";
		cin>>amount;
		if(amount<=Balance_account)
		{
			Balance_account = Balance_account - amount ;
			cout<<"\nYour Balance_account is : "<<Balance_account;
		}
		else
		{
			cout<<"\nYour Account balance is low ";
		}
	}
	
	// -To display name and balance
	
	void display()
	{
		cout<<"\ncustomer name : "<<Name_depositor;
		cout<<"\ncustomer Balance amount: "<<Balance_account;
		
	}
};

int main()
{
	bank b1;
	
	b1.get();
	b1.deposite();
	b1.withdraw();
	b1.display();
	return 0;
}

