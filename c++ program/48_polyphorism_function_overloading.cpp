# include <iostream>
using namespace std;
class A
{
    int num1,num2,s,m;
    public:
    void person()
    {
        cout<<"Enter two numbers..."<<endl;
        cin>>num1>>num2;
        s = num1 + num2;
        cout<<"Add = "<<s<<endl;
    }
    void person(int a,int b)
    {
        m = a*b;
        cout<<"Product = "<<m<<endl;
    }
};
int main ()
{
    A obj;
    obj.person();
    obj.person(10,20);
    return 0;
}