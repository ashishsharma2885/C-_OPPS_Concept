#include<iostream>
using namespace std;
int a,b,c;
class A
{
  public:
  void input();
  void add();
};
void A :: input()
{
    cout<<"Enter two Numbers: ";
    cin>>a>>b;
}
void A :: add()
{
    c=a+b;
    cout<<"Addition " <<c<<endl;
}

class B
{
  public:
  void sub();
};
void B :: sub()
{
    c=a-b;
    cout<<"Substraction "<<c<<endl;
}
class C : public A, public  B
{
  public:
  void multi();
  void div();
};
void C :: multi()
{
    c=a*b;
    cout<<"Multiplication " <<c<<endl;
}
void C :: div()
{
    c=a/b;
    cout<<"Division "<<c<<endl;
}
int main()
{
C obj;
obj.input();
obj.add();
obj.sub();
obj.multi();
obj.div();

return 0;
}