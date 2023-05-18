#include <iostream>
using namespace std;
class A
{
public:
  int a, b, c;
  virtual void test() = 0;
  A(int a, int b) 
  {
    cout << "constructor called" << endl;
  }
};

class B : public A
{

public:
  B(int i, int j) : A(a, b)
  {
    a = i;
    b = j;
    c = a + b; 
  }
  void test() 
  { 
  cout << "The sum is = " << c << endl; 
  }
};

int main(void) 
{
  B obj(4, 8);
  obj.test();
  return 0;
}
