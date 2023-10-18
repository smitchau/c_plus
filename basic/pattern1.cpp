#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=0;i<=5;i++){
		for(j=0;j<=i;j++)
		{
			if(i%2==0)
			{
				cout<<0;
			}
			else{
				cout<<1;
			}
		}
		cout<<"\n";
	}
	
	return 0;
}
