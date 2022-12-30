// W.A.P to show the example of class template?
#include<iostream>
using namespace std;
template <class A>
class print
{
    public:
    print(A x,A y)
    {
        cout<<x<<ends<<y<<endl;
    }
};

int main()
{
    print <double> obj(45.4,346.4);
    return 0;
}