#include<iostream>
using namespace std;

class calculator{
	int no1,no2,result;
	public:
		void get()
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
	calculator c1;
	cout<<"\n|||||WELCOME TO CALCULATOR|||||\n";
	cout<<"\nEnter + for addition \n - for subtraction \n * for multiplication \n / for division \n % for modulo";
	
	cout<<"\nEnter your choice : ";
	cin>>choice;
	
	switch(choice)
	{
		case '+':
			c1.get();
			c1.add();
			break;
	}
	
	return 0;
}
