/* Write a program to find the max number from given two numbers using
friend function */
#include <iostream>
using namespace std;
class maxi 
{
  int num1, num2;
  friend void get(maxi);   //declaration friend fun
};

//defination friend fun
void get(maxi m1) 
{
	cout << "Enter num 1 and num 2 : ";
  	cin >> m1.num1 >> m1.num2;
  	if (m1.num1 > m1.num2) 
	{
   	 	cout << "num1 is max";
  	} 
	else
	{
    	cout << "num2 is max";
  	}
}
int main()
{
	maxi obj;
  	get(obj);  //call
  	return 0;
}
