// encapsulation is process of binding data and function together
/* encapsulation involves combining similar data and funtions into a single unit called
class. by encapsulating these functions and data , we protect that data from change.
this concept is also known as data or information hiding.*/

#include<iostream>
using namespace std;
class employee
{
	int id;
	public:
	void get()
	{
		cout<<"enter id :";
		cin>>id;	
	}	
	void display()
	{
		cout<<"id is : "<<id;
	}
};
int main()
{
	employee e1;
	e1.get();
	e1.display();
	return 0;
}
