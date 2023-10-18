#include<iostream>
using namespace std;
int main()
{
	int no1[100] ,no ,i,sum=0,sum1;
	cout<<"Total enter number of digit's : ";
	cin>>no;
	
	cout<<"Enter choice %d number !\n",no;
	for(i=1;i<=no;i++)
	{
		cin>>no1[i];
	}
	cout<<"\nPrint choice number !";
	for(i=1;i<=no;i++)
	{
		cout<<"\t"<<no1[i];
	}
	for(i=1;i<=no;i++)
	{
		if(no1[i]%2==0)
		{
			sum=sum+no1[i];
		}
		else
		{
			sum1=sum1+no1[i];
		}
	}
	cout<<endl<<"sum of even number is : "<<sum;
	cout<<endl<<"sum of odd number is : "<<sum1;	
	
	
	
	
	
	return 0;
}
