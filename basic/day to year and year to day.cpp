#include<iostream>
using namespace std;
int main()
{
	int days,year,month,choice,day;
	
	cout<<"choice 1 : convert days to year , month , days";
	cout<<"choice 2 : convert year to days";
	cout<<"________________________________________________________";
	cout<<"Enter your choice :";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"Enter number of days : ";
			cin>>days;
			
			year = days/365;
			month = (days % 365)/30 ; //(days - year * 365)/30;
			day = days-((year*365)+(month*30));
			
			cout<<year <<"-"<<month<<"-"<<day;
			
		case 2:
			cout<<"Enter year : ";
			cin>>year;
			
			day = year * 365 ;
			
			cout<<day;
	}
	
	return 0;
}
