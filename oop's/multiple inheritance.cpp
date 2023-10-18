/*
Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance)
*/

#include<iostream>
using namespace std;

//create person class
class person
{
	//data member
	string name;      
	int age;
	public:
	void ditail(){
		cout<<"\nEnter name : ";
		cin>>name;
		cout<<"\nEnter age : ";
		cin>>age;
	}
	void display_person(){
		cout<<"\nname is : "<<name<<"\tage is : "<<age;
	}
};

//create student class
class student
{
	//data member
	float percentage;
	public:
	void per_student(){
		cout<<"\n\nEnter percentage : ";
		cin>>percentage;
	}
	void display_stu(){
		cout<<"\npercentage is : "<<percentage;
	}
};

//create teacher class
class teacher : public person , public student
{
	//data member
	float salary;
	public:
	void get(){
		cout<<"\n\nEnter salary : ";
		cin>>salary;
	}
	void display(){
		cout<<"\nsalary is : "<<salary;
	}	
};

//main class
int main()
{
	teacher t1;
	t1.ditail();
	t1.display_person();
	t1.per_student();
	t1.display_stu();
	t1.get();
	t1.display();
	
	return 0;
}
