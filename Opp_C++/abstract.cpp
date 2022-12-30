#include<iostream>>
using namespace std;
class animal
{
    public:
    virtual void sound()=0;
    void eat()
    {
        cout<<"animal eating...";
    }
};

class dog: public animal
{
    public:
    void sound()
    {
        cout<<"Bho Bho.."<<endl;
    }
};

int main()
{
    dog d;
    d.sound();
    d.eat();

    return 0;
}