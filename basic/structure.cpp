#include<iostream>
using namespace std;
struct student
{
	int roll_no;
	string name;
	float pr;
};
int main()
{
	struct student s1;
	cout<<"Enter your roll no : ";
	cin>>s1.roll_no;
	cout<<"Enter your name : ";
	cin>>s1.name;
	cout<<"Enter your percentage : ";
	cin>>s1.pr;
	
	cout<<s1.roll_no<<"\n";
	cout<<s1.name<<"\n";
	cout<<s1.pr;
	
	return 0;
}
