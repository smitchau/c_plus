// inline function using user input

#include<iostream>
using namespace std;

inline int sum(int x,int y) 		// create inline fun with parameter
{
	return(x+y);
}
inline int sub(int r,int s)			// create inline fun with parameter
{
	return(r-s);
}

int main()
{
	int a,b;
	cout<<"\nEnter a and b : ";
	cin>>a>>b;
	
	cout<<"\nSum is : "<<sum(a,b)<<"\n";    // call inline fuc
	cout<<"\nsub is : "<<sub(a,b)<<"\n";	//  call inline fuc
	return 0;
}
