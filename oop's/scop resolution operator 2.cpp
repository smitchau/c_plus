#include<iostream>
using namespace std;
class A
{
	public:
		A();
};
A :: A()
{
	int roll;
	string name;
	cout<<"Enter roll no : ";
	cin>>roll;
	cout<<"Enter name : ";
	cin>>name;
}
int main()
{
	A obj;
	return 0;
}
