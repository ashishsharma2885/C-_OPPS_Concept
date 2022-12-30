// W.A.P to show the example of function template?
#include<iostream>
using namespace std;
template <class A>
void print(A x, A y)
{
    cout<<x<<ends<<y<<endl;
}

int main()
{
print(10,20);
print('a','b');
print(45.3,376.7);
print("ashish","Avinash");

return 0;
}