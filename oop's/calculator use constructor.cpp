// Write a program of Addition, Subtraction, Division, Multiplication using constructor. 

#include<iostream>
using namespace std;

class Addition
{
	int a,b,sum;
	
	public:
		
	Addition()
	{
		cout<<"\n<<<<<Addition>>>>>\n";
		cout<<"\nEnter number 1: ";
		cin>>a;
		cout<<"\nEnter number 2: ";
		cin>>b;
		sum = a+b;
		cout<<"\nsum is : "<<sum;
	}
};

class Subtraction
{
	int a,b,sub;
	
	public:
		
	Subtraction()
	{
		cout<<"\n<<<<<Subtraction>>>>>\n";
		cout<<"\nEnter number 1: ";
		cin>>a;
		cout<<"\nEnter number 2: ";
		cin>>b;
		sub = a-b;
		cout<<"\nSubtraction is : "<<sub;
	}
};

class Division
{
	int a,b,div;
	
	public:
		
	Division()
	{
		cout<<"\n<<<<<Division>>>>>\n";
		cout<<"\nEnter number 1: ";
		cin>>a;
		cout<<"\nEnter number 2: ";
		cin>>b;
		div = a/b;
		cout<<"\nDivision is : "<<div;
	}
};

class Multiplication
{
	int a,b,mul;
	
	public:
		
	Multiplication()
	{
		cout<<"\n<<<<<Multyplication>>>>>\n";
		cout<<"\nEnter number 1: ";
		cin>>a;
		cout<<"\nEnter number 2: ";
		cin>>b;
		mul = a*b;
		cout<<"\nMultiplication is : "<<mul;
	}
};

int main()
{
	Addition a1;
	Subtraction s1;
	Division d1;
	Multiplication m1;
	return 0;
}
