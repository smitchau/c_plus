// Write a Program of Two 1D Matrix Addition using Operator Overloading
#include <iostream>
using namespace std;
class addition
{
	int array[5];

	public:
		
 	void get()
	{
    	int i;
    	cout << "Enter total 5 values" << endl;
   		for (i = 0; i < 5; i++)
		{
      		cout << " ";
      		cin >> array[i];
    	}
  	}

  	void display()
	{
    	int i;
    	cout <<" ";
    	for (i = 0; i < 5; i++)
		{
      		cout << array[i] << "\t";
    	}
  	}
  	void operator+(addition obj)
	{
    	int i;
    	int result[100];
    	cout<<"\n";
    	for(i = 0; i < 5; i++)
    	{
    	   result[i] = array[i] + obj.array[i];
		}
		for(i = 0; i < 5; i++) 
		{
     		cout << result[i] << "\n";
    	}
    }
};

int main()
{
  addition arr1, arr2;
  arr1.get();
  arr2.get();
  cout << "\ndisplaying array's";
  arr1.display();
  cout << "\nsecond matrix";
  arr2.display();
  arr1 + arr2;
  return 0;
}
