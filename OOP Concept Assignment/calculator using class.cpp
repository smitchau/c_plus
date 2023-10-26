// WAP to create simple calculator using class
#include<iostream>
using namespace std;
class Addition{
	int n1,n2,sum;
	public:
		void add()
		{
			cout<<"<<<<<<<<<< Addition >>>>>>>>>>";
			cout<<"\nEnter number 1 and number 2 : ";
			cin>>n1>>n2;
			sum = n1 + n2;
			cout<<"Addition is : "<<sum;	
		}
};
class subtraction{
	int n1,n2,total;
	public:
		void sub()
		{
			cout<<"\n<<<<<<<<<< Subtraction >>>>>>>>>>";
			cout<<"\nEnter number 1 and number 2 : ";
			cin>>n1>>n2;
			total = n1 - n2;
			cout<<"Subtraction is : "<<total;	
		}
};
class multiplication{
	int n1,n2,mul;
	public:
		void multy()
		{
			cout<<"\n<<<<<<<<<< Multiplication >>>>>>>>>>";
			cout<<"\nEnter number 1 and number 2 : ";
			cin>>n1>>n2;
			mul = n1 * n2;
			cout<<"Maltiplication is : "<<mul;	
		}
};
class division{
	int n1,n2,total;
	public:
		void div()
		{
			cout<<"\n<<<<<<<<<< Division >>>>>>>>>>";
			cout<<"\nEnter number 1 and number 2 : ";
			cin>>n1>>n2;
			total = n1 / n2;
			cout<<"Divition is : "<<total;	
		}
};
class modulo{
	int n1,n2,total;
	public:
		void mod()
		{
			cout<<"\n<<<<<<<<<< Modulo >>>>>>>>>>";
			cout<<"\nEnter number 1 and number 2 : ";
			cin>>n1>>n2;
			total = n1 % n2;
			cout<<"Modulo is : "<<total;	
		}
};
int main()
{
	Addition a1;
	subtraction s1;
	multiplication m;
	division d1;
	modulo m1;
	a1.add();
	s1.sub();
	m.multy();
	d1.div();
	m1.mod();
	
	return 0;
}
