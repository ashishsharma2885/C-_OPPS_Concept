// W.A.P to show the example of encapsulation?
#include<iostream>
using namespace std;
class thief
{
    private:
    string name,address;
    int mob;

    public:
    void input()
    {
        name="Sanjay";
        address="Nagwa tola payasi";
        mob=80829798;
    }
    void output()
    {
        cout<<name<<endl;
        cout<<address<<endl;
        cout<<mob;
    }
};
class police:public thief
{

};
    int main()

    {
    police p;
    p.input();
    p.output();
    return 0;
    }

