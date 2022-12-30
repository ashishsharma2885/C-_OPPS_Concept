// W.A.P to add two numbers using friend function?
#include<iostream>
using namespace std;
class ashish
{
    private:
      string tv;
    public:
      void show()
        {
            tv="IPL final 2021";
        }
    friend void avinash(ashish r);   
};
void avinash(ashish r)
{
   cout<<"I' m avinash now i, 'Watching "<<r.tv;
}
int main()
{
    ashish a;
    a.show();
    avinash(a);
    return 0;

}
