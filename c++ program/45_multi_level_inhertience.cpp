# include <iostream>
using namespace std;

class A
{
    protected:
    int a,b;
    public:
    void input()
    {
        cout<<"Enter Two Numbers"<<endl;
        cin>>a>>b;
    }
};
class B : public A
{
    int c;
    public:
    void add()
    {
        c=a+b;
        cout<<"sum "<<c<<endl;
    }
};
class C : public B
{
    int d;
    public:
    void sub()
    {
        d = a-b;
        cout<<"sub "<<d<<endl;
    }
};
class D : public C
{
    int d;
    public:
    void mul()
    {
        d = a*b;
        cout<<"Mul "<<d<<endl;
    }
    void div()
    {
        d = a/b;
        cout<<"Div "<<d<<endl;
    }
};
int main ()
{
    D obj;
    obj.input();
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    return 0;
}