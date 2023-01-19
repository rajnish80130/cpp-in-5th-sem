# include <iostream>
using namespace std;
int a,b,c;
class A
{
    public:
    void input()
    {
        cout<<"Enter Two Numbers"<<endl;
        cin>>a>>b;
    }
    void add()
    {
        c=a+b;
        cout<<"sum "<<c<<endl;
    }
};
class B
{
    public:
    void sub()
    {
        c = a-b;
        cout<<"sub "<<c<<endl;
    }
    void mul()
    {
        c = a*b;
        cout<<"Mul "<<c<<endl;
    }
    
};
class C : public A,public B
{
    public:
    void div()
    {
        c = a/b;
        cout<<"Div "<<c<<endl;
    }
};
int main ()
{
    C obj;
    obj.input();
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    return 0;
}