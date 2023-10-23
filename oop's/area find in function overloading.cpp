/*
 Write a program to calculate the area of circle, rectangle and triangle using 
Function Overloading
*/

#include<iostream>
using namespace std;

class area
{
	public:
	void find_area()
	{
		int r;
		cout<<"<<<<<<<<<<<<<<<<<<<< area of circle >>>>>>>>>>>>>>>>>>>>"<<endl;
		cout<<"Enter radius : ";
		cin>>r;
		cout<<"Area of circle is :"<<3.14*r*r;
	}
	void find_area(int a,int b)
	{
		int l,w;
		cout<<"\n\n<<<<<<<<<<<<<<<<<<<< area of rectangle >>>>>>>>>>>>>>>>>>>>"<<endl;
		cout<<"Enter length and width : ";		
		cin>>l>>w;
		a = l;
		b = w;
		cout<<"Area of ractangle is : " <<l * w ;
	}
	void find_area(double a,double b)
	{
		int s1,s2;
		cout<<"\n\n<<<<<<<<<<<<<<<<<<<< area of rectangle >>>>>>>>>>>>>>>>>>>>"<<endl;
		cout<<"Enter side 1 and side 2: ";
		cin>>s1>>s2;
		cout<<"Area of triangle is : "<<0.5*s1*s2;
	}
};
//main function
int main()
{
	area obj;
	obj.find_area();
	obj.find_area(0,0);
	obj.find_area(0.0,0.0);
	return 0;
}



