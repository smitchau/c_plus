#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int ch,r,l,w,area;
	cout<<"1 is circle and 2 is ractangle";
	cout<<"\nenter choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"enter radius : ";
			cin>>r;
			area=3.14*r*r;
			cout<<"area = : "<<area;
			break;
		case 2:
			cout<<"enter length and width : ";
			cin>>l>>w;
			area=l*w;
			cout<<"area = : "<<area;
			break;
		default:
			cout<<"Enter valid choice";
	}
	return 0;
}
