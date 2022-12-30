// W.A.P to show the simple example of data abstraction
#include<iostream>
using namespace std;
class myBank
{
    private:
    int atmPin,Balance;
    public:
    string bName,IFSC;
    int accNubmer;

    void input()
    {
        atmPin=8081;
        Balance=80809217;
        bName="Paytm";
        IFSC="paytm0123456";
        accNubmer=80819217;
    }

    void output()
    {
        cout<<"my bank details..."<<endl;
        cout<<atmPin<<endl;
        cout<<Balance<<endl;
        cout<<bName<<endl;
        cout<<IFSC<<endl;
        cout<<accNubmer<<endl;
    }
};

int main()
{
    myBank m;
    m.input();
    m.output();


cout<<"Ashish tring to access my account..."<<endl;
//cout<<m.atmPin<<endl; // can not access
//cout<<m.Balance<<endl; //can not access
cout<<m.bName<<endl;
cout<<m.IFSC<<endl;
cout<<m.accNubmer<<endl;
return 0;
}