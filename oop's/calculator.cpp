// calculator manudriven program

#include<iostream>
using namespace std;
int main()
{
	int n1,n2,sum,modulo,multy,div,sub,choice;
	cout<<"case 1 : addition\n";
	cout<<"case 2 : subtraction\n";
	cout<<"case 3 : multiplication\n";
	cout<<"case 4 : divition\n";
	cout<<"case 5 : modulator\n\n";
	
	cout<<"Enter Your Choices ? ";
	cin>>choice;
	
	switch(choice)
		{
			case 1:
				cout<<"Enter Number One : ";
				cin>>n1;
				
				cout<<"Enter Number Two : ";
				cin>>n2;
				
				sum = n1 + n2;
				cout<<"sum is: "<<sum;
				break;
				
			case 2:
				cout<<"Enter Number One : ";
				cin>>n1;
				
				cout<<"Enter Number Two : ";
				cin>>n2;
				
				sub = n1 - n2;
				cout<<"subtraction is: "<<sub;
				break;
				
			case 3:
				cout<<"Enter Number One : ";
				cin>>n1;
				
				cout<<"Enter Number Two : ";
				cin>>n2;
				
				multy = n1 * n2;
				cout<<"multyplication is: "<<multy;
				break;
				
			case 4:
				cout<<"Enter Number One : ";
				cin>>n1;
				
				cout<<"Enter Number Two : ";
				cin>>n2;
				
				div = n1 / n2;
				cout<<"divition is: "<<div;
				break;
				
			case 5:
				cout<<"Enter Number One : ";
				cin>>n1;
				
				cout<<"Enter Number Two : ";
				cin>>n2;
				
				modulo = n1 % n2;
				cout<<"mudulo is: "<<modulo;
				break;
				
		}
	
	
	return 0;
}
