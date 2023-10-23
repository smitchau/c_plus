/*
Write a program to swap the two numbers using friend function without 
using third variable
*/
#include<iostream>
using namespace std;
class swaping
{
	int a,b;
	friend void swap(swaping);
};
void swap(swaping s)
{
	cout<<"Enter a and b : ";
	cin>>s.a>>s.b;  
	s.a = s.a+s.b;  //5+7 = 12
	s.b = s.a-s.b;  //12-7 
	s.a = s.a-s.b;
	cout<<"a is :"<<s.a<<endl<<"b is :"<<s.b;
}
int main()
{
	swaping obj;
	swap(obj);
	return 0;
}
