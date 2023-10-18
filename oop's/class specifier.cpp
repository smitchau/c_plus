//  create simple calculator using class

#include<iostream>
using namespace std;

// calculator class 
class calculator{
	int no1,no2,result;						//data member
	public:
		void get()							//member function
		{
			cout<<"Enter no1 and no2 : ";
			cin>>no1>>no2;
		}
		
		void add()
		{
			cout<<"Addition is : "<<no1 + no2;
		}
		
		void sub()
		{
			cout<<"subtraction is : "<<no1 - no2;
		}
		
		void multy()
		{
			cout<<"multiplication is : "<<no1 * no2;
		}
		
		void div()
		{
			cout<<"Division is : "<<no1 / no2;
		}
		
		void modulo()
		{
			cout<<"modulo is : "<<no1 % no2;
		}
};

int main()
{
	char choice;
	calculator c1; 		// create object
	
	cout<<"\n<<<<<<<<<<WELCOME TO CALCULATOR>>>>>>>>>>\n";
	cout<<"\nEnter (+) for addition \nEnter (-) for subtraction \nEnter (*) for multiplication \nEnter (/) for division \nEnter (%) for modulo";
	
	cout<<"\n\nEnter your choice : ";
	cin>>choice;
	
	switch(choice)
	{
		case '+':
			c1.get();     // fuction call
			c1.add();	  // function call
			break;
		case '-':
			c1.get();     // fuction call
			c1.sub();	  // function call
			break;
		case '*':
			c1.get();     // fuction call
			c1.multy();	  // function call
			break;
		case '/':
			c1.get();     // fuction call
			c1.div();	  // function call
			break;
		case '%':
			c1.get();     // fuction call
			c1.modulo();	  // function call
			break;
	}
	
	return 0;
}
