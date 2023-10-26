/*
Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the marks 
obtained in two subjects and class result contains the total marks obtained in 
the test. The class result can inherit the details of the marks obtained in the 
test and roll number of students. (Multilevel Inheritance)
*/

#include<iostream>
using namespace std;

//create base class
class student
{
	protected:
		int roll_no;
	public:
		void get_roll_no()
		{
			cout<<"Enter roll no : ";
			cin>>roll_no;
		}

};

//create one derive class
class Test : public student
{
	protected:
		float sub1,sub2;
	public:
		void get_Test()
		{
			cout<<"\nMarks of sub1 : ";
			cin>>sub1;
			cout<<"\nMarks of sub2 : ";
			cin>>sub2;
		}
};

//create second derive class
class result : public Test
{
	protected:
		float total;
	public:
		void show_result()
		{
			total = sub1 + sub2;
			cout<<"\nroll no : "<<roll_no <<"\nsub1 and sub2 marks is : "<<sub1 <<","<< sub2 <<"\nTotal marks is "<<total;	
		}
};

int main()
{
	//obj is create
	result obj;
	
	//fuction call
	obj.get_roll_no();
	obj.get_Test();
	obj.show_result();
	
	return 0;
}
