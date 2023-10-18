/*
 Write a program to calculate the area of circle, rectangle and triangle using 
Function Overloading
*/

#include<iostream>
using namespace std;

int area(int r)
{
	return 3.14*r*r;
}
int area(int l,int w)
{
	return l*w;
}
int area(double a,double b)
{
	return 0.5*a*b;
}

//main function
int main()
{
	int x,y,z;
	
	cout<<"\nEnter radius : ";
	cin>>x;
	cout<<"\nArea of circle is : "<<area(x);
	cout<<"\n\nEnter length and width : "<<endl;
	cin>>y>>z;
	cout<<"\nArea of ractangle is : "<<area(y,z);
	
	cout<<"\n\nArea of triangle is : "<<area(5.0,10.0);
	return 0;
}



