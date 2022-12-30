#include<iostream>
using namespace std;
class animal
{
   public:
   void eat()
   {
    cout<<"animal eating..."<<endl;
   }
};

class cat : public animal
{
  public:
  void voice()
{
    cout<<"meow meow..."<<endl;
}
};

class dog : public animal
{
  public:
  void voice()
  {
    cout<<"Bho Bho..."<<endl;
  }
};

int main()
{
 cat c;
 dog d;

 c.eat(); c.voice();
 d.voice(); d.voice();

 return 0;
}
