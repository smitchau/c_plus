#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	string name1="Xyz",name2="abc",name3;
	name3=name1+" "+name2;
	cout<<name1<<name2;
	cout<<"\n"<<name3;
	cout<<"\n length of name3 is :"<<name3.length();
	cout<<"\n"<<name3[1];
	name3[0]='j';
	cout<<name3<<endl;
	cout<<sqrt(25);
	return 0;
}
