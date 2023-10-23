
#include<iostream>
using namespace std;
class value
{
	int no1;
	public:
	void get()
	{
		cout<<"Enter value :";
		cin>>no1;
	}	
	void operator --()
	{
		--no1;
	}
	void display()
	{
		cout<<"value is :"<<no1;
	}
};
int main()
{
	value obj;
	obj.get();
	--obj;
	obj.display();	
	return 0;
}
