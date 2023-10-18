#include<iostream>
using namespace std;

void swap(int ,int );

int main()
{
   
    int a,b;
    cout<<"Enter the Two Numbers to Swap in C++: ";
    cin>>a>>b;
    cout<<"\nAfter Swapping of Two Numbers:";
    swap(a,b);
    return 0;
}
void swap(int x,int y)
{
 	int temp;

 
 	temp=x;

 	x=y;

 	y=temp;

 	cout<<" "<<x<<"   "<<y;
 
}
