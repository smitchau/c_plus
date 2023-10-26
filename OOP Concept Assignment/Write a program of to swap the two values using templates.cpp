#include <iostream>
using namespace std;
template <typename T>
void swap_num(T& a, T& b) 
{
  T temp;
  temp = a;
  a = b;
  b = temp;
  cout << "After swap: a = " << a << ", b = " << b << endl;
}
int main() {
  int a = 1;
  int b = 2;

  cout << "Before swap: a = " << a << ", b = " << b << endl;

  swap_num(a, b);

  

  return 0;
}

