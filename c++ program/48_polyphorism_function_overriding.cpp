# include <iostream>
using namespace std;
class A
{
    public:
    virtual void person()
    {
        cout<<"i am a person of class A"<<endl;
    }
};
class B : public A
{
    public:
    void person()
    {
        cout<<"i am a person of class B"<<endl;
    }
};
int main ()
{
    B obj;
    obj.person();
    obj.A::person();
    return 0;
}