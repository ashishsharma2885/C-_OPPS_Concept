// W.A.P to show the example of function overloading
#include<iostream>
using namespace std;
class A
{
      public:
      virtual void person()
      {
        cout<<"good morning"<<endl;
      }
};

class B: public A
{
      public:
      void person()
      {
        cout<<"Good night"<<endl;
      }
};

int main()
{
A *p;
B obj;
p=&obj;
p->person();
return 0;
}
