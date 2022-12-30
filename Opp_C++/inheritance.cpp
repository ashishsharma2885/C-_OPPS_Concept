#include<iostream>>
using namespace std;
class Dad
{
    protected:
    int amount;
    public:
     void input()
     {
        amount=100000;
     }
};
class Son : public Dad{
    int money;
    public:
     void show()
     {
        money=274506;
        cout<<"Son Money "<<money<<endl;
        cout<<"Dad money "<<amount;
     }
};
int main()
{
    Son s;
    s.input();
    s.show();
    return 0;
}