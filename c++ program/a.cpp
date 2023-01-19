#include<iostream>
using namespace std;

class friendl
{
    public:
    int a=12,b=45,sum;
    void zero()
    {
        sum = a + b;
        cout<<sum;
    }
};
int main()
{
    friendl obj;
    obj.zero();
    return 0;
}