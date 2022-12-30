/*#include<iostream>>
using namespace std;
class A
{
    public:
    A(int a, int b) // parameterized
    {
        cout<<a<<ends<<b;
    }
};
int main()
{
    A obj(100,200);
    return 0;
}
*/

// copy constructor
#include<iostream>
using namespace std;
class A
{
    int x, y;
    public:
A(int a,int b) // parameterized
{
    x=a; y=b;
    cout<<x<<ends<<y<<endl;
}
A(A &ref)
{
    x=ref.x;
    y=ref.y;
    cout<<x<<ends<<y;
}
};
int main()
{
A obj(10,20);
A obj2=obj;
return 0;
}