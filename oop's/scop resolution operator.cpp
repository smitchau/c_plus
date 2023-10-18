#include<iostream>
using namespace std;
class A{
	public:
		void get();   //declaration
};
void A :: get()   //defination
{
	cout<<"Fuction of class";
}
int main()
{
	A obj;
	obj.get();
	return 0;
}
