# include <iostream>
using namespace std;

class mybankdetails
{
    private:
    int atmPin,balance;
    public:
    string ifsc,bName;
    int accountNo;

    void input()
    {
        atmPin = 852193;
        balance = 10000;
        ifsc = "allaha23423";
        bName = "Rajnish";
        accountNo = 23432453;
    }
    void output()
    {
        cout<<"My bank account details ......."<<endl;
        cout<<atmPin<<endl;
        cout<<balance<<endl;
        cout<<ifsc<<endl;
        cout<<bName<<endl;
        cout<<accountNo<<endl;
    }
};
int main ()
{
    mybankdetails a;
    a.input();
    a.output();
    cout<<"goru trying to access my account"<<endl;
    // cout<<a.atmPin<<endl;         //cannot access
    // cout<<a.balance<<endl;        //cannot access
    cout<<a.ifsc<<endl;
    cout<<a.bName<<endl;
    cout<<a.accountNo<<endl;
    return 0;
}