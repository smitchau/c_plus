/*
 Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading
*/

//same function name but different parameter is called function overloading
#include<iostream>
using namespace std;
//create class
class calculator
{
	//prototype
	public:
		//create functions
		void calc(int num1 ,int num2)
		{
			cout<<"\nAddition is : "<< num1 + num2;	
		}
	
		void calc(double num1 ,double num2)
		{
			cout<<"\nsubtraction is : "<< num1 - num2;	
		}
	
		void calc(int num1 ,double num2)
		{
			cout<<"\nmultiplication is : "<< num1 * num2;	
		}
	
		void calc(double num1 ,int num2)
		{
			cout<<"\ndivision is : "<< num1 / num2;	
		}
};


int main()
{
	//create object
	calculator c1;
	//call function
	c1.calc(5,5);
	c1.calc(2.0,5.0);
	c1.calc(2,7.0);
	c1.calc(2.0,6);	
	return 0;
}
