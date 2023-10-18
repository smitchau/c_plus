#include<iostream>
using namespace std;
int main()
{
	int num,rem,org,sum=0;
	cout<<"Enter number : ";
	cin>>num;
	
	org=num;
	
	while(num!=0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
	cout<<"\nsum of your digits : "<<sum;
	cout<<"\n";
	
	if(org==sum)
	{
		cout<<"\nnumber is armstrong";
	}
	else{
		cout<<"\nnumber is not armstrong";
	}
	
	return 0;
}
