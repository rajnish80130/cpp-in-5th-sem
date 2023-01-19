#include<iostream>
using namespace std;

class A
{
    public:
    int a;
    private:     // itself and friend of this class
    int b;
    protected:   // inheritence and itself
    int c;
};
int main()
{
    A obj;
    obj.a = 10;   //allowed
    // obj.b = 20;   //not allowed
    // obj.c = 30;   //not allowed
    cout<<obj.a<<endl;
    // cout<<obj.b<<endl;
    // cout<<obj.c<<endl;
    return 0;
}