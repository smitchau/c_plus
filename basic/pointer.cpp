#include<iostream>
using namespace std;
int main()
{
	int num=10;
	int *ptr=&num;
	cout<<num;
	cout<<endl<<&num<<endl;//print threw variable;
	
	cout<<ptr<<endl;
	cout<<ptr<<endl;//de ref//print threw pointer variable
	
	//num=25;//update threw variable;
	
	*ptr=25;//update trew pointer variable
	cout<<*ptr;
	cout<<num;
	
	return 0;
}
