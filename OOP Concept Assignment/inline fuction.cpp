// Write a program to find the multiplication values and the cubic values using inline function 

#include<iostream>
using namespace std;

// create inline function
inline int multy(int num1 , int num2)
{
	cout<<"\nmultiplication is :"<<num1 * num2;
}

inline int cube(int a)
{
	cout<<"\n\ncube is : "<<a * a * a;
}

int main()
{
	multy(5,4);
	cube(3);
	return 0;
}
