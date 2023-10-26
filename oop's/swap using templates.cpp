// Write a program of to swap the two values using templates
#include<iostream>
using namespace std;

template<typename t>
t swaping(t a,t b)
{
	t temp;
	temp = a;
	a = b ;
	b = temp;
}

int main()
{
	a=5,b=3;
	return 0;
}
