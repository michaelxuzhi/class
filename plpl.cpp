#include <iostream.h>
class A
{
public:
  A(int i);
  void print();
  const int&r;
private:
  const int a;
  static const int b;
}
const int A::b+10
A::A(int i):a(i),r(a)
{
}void A::print()
{
  cout<<a<<":"<<b<<":"<<r<<endl;
}
void main ()
{
A a1(100),a2(0);
a1.print();
a2.print();
}