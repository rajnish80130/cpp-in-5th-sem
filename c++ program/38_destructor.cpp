# include <iostream>
using namespace std;
int count = 0;
class A
{
    public:
    A()
    {
        cout<<"object"<<++count<<ends<<"created"<<endl;
    }
    ~A()
    {
        cout<<"object"<<count--<<ends<<"deleted"<<endl;
    }
};
int main ()
{
    A obj,obj2,obj3;
    return 0;
}